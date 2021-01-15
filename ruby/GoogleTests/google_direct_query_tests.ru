#!/usr/bin/env ruby

require 'selenium-webdriver'

require 'test/unit'
require 'test/unit/testcase'
require 'test/unit/ui/console/testrunner'
require 'test/unit/testsuite'
require 'test/unit/testresult'

# Constants class
class Constants
    # Positive search term
    def self.search_term
        "duck"
    end

    # Negative search term
    def self.negative_search_term
        "goose"
    end

    # Google direct-query URL
    def self.google_direct_url
        "https://www.google.com/search?q=%s&hl=%s"
    end

    # Google base URL with language sepcifier
    def self.google_base_url
        "https://www.google.com/?hl=%s"
    end

    # Verification string
    def self.verification_string
        "Duck - Wikipedia"
    end

    # Supported languages
    def self.google_languages
        ["en", "de", "af", "am", "bg", "ca", "hr", "cs", "nl"]
    end
end


# Performs test verification via browsers (chrome and firefox support only).
class BrowserSearchTests < Test::Unit::TestCase
    # Does a direct query in-browser for the term 'duck' within chrome
    def test_google_search_duck_direct_query_chrome
        browser = Selenium::WebDriver.for :chrome
        puts "Directly searching for 'duck' via the URL..."
        loop_through_languages_direct_query(browser, Constants.search_term, Constants.verification_string, true)
    end

    # Does a direct query in-browser for the term 'duck' within firefox
    def test_google_search_duck_direct_query_firefox
        browser = Selenium::WebDriver.for :firefox
        puts "Directly searching for 'duck' via the URL..."
        loop_through_languages_direct_query(browser, Constants.search_term, Constants.verification_string, true)
    end

    # Validates negative case (searching for a non-duck term results in the expected
    # text to not be found)
    def test_google_search_duck_negative_search_chrome
        browser = Selenium::WebDriver.for :chrome
        puts "Directly searching for 'duck' via the URL..."
        loop_through_languages_direct_query(browser, Constants.negative_search_term, Constants.verification_string, false)
    end

    # Validates for each languages that the verification string is either present or not present
    def loop_through_languages_direct_query(browser, search_string, verification_string, should_be_found)
        Constants.google_languages.each do |lang|
            puts "Verifying #{lang} language search results..."
            browser.navigate.to(Constants.google_direct_url % [search_string, lang])
            assert((browser.find_element(:id=>"gsr").text.include? verification_string) == should_be_found)
        end
    end

    # Validate that typing into the search box and pressing enter contains the same results
    # as the above direct queries.
    # Chrome-only (equivalency class)
    def test_typing_into_search_box_duck_search_chrome
        browser = Selenium::WebDriver.for :chrome
        Constants.google_languages.each do |lang|
            lang_url = Constants.google_base_url % lang
            puts "Browsing to #{lang_url}..."
            browser.navigate.to(lang_url)
            search_box = browser.find_element(:name=>"q")
            type_term(search_box, Constants.search_term)
            assert(browser.find_element(:id=>"gsr").text.include? Constants.verification_string)
        end
    end

    # Uses selenium to type in a term
    def type_term(input_box, term_to_type)
        input_box.send_keys term_to_type
        input_box.send_keys :enter
    end
end

# Performs test verification via direct API queries.
class DirectSearchTests < Test::Unit::TestCase

end

class RunTests
    def self.suite()
        suite = Test::Unit::TestSuite::new
        suite << BrowserSearchTests::suite
        suite << DirectSearchTests::suite

        return suite
    end
end

tr = Test::Unit::TestResult::new

RunTests.suite.run(tr) do|result|
  puts(result)
end

