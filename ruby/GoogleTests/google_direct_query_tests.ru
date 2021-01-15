#!/usr/bin/env ruby

require 'selenium-webdriver'

require 'test/unit'
require 'test/unit/testcase'
require 'test/unit/ui/console/testrunner'
require 'test/unit/testsuite'
require 'test/unit/testresult'

# Performs test verification via browsers (chrome and firefox support only).
class BrowserSearchTests < Test::Unit::TestCase
    # Search term
    @@search_term = "duck"
    # The direct-search url for google
    @@direct_url = "https://www.google.com/search?q=#{@@search_term}&hl=%s"
    # Verification string (TBD). Non-english for verification against other languages.
    @@verification_string = "Duck - Wikipedia"
    # Supported languages
    @@languages = ["en", "de", "af", "am", "bg", "ca", "hr", "cs", "nl"]

    # Does a direct query in-browser for the term 'duck' within chrome
    def test_google_search_duck_direct_query_chrome
        browser = Selenium::WebDriver.for :chrome
        puts "Directly searching for 'duck' via the URL..."

        @@languages.each do |lang|
            browser.navigate.to(@@direct_url % lang)
            #puts browser.find_element(:id=>"gsr").text
            assert(browser.find_element(:id=>"gsr").text.include? @@verification_string)
        end
    end

    # Does a direct query in-browser for the term 'duck' within firefox
    def test_google_search_duck_direct_query_firefox
        browser = Selenium::WebDriver.for :firefox
        puts "Directly searching for 'duck' via the URL..."
        
        @@languages.each do |lang|
            browser.navigate.to(@@direct_url % lang)
            #puts browser.find_element(:id=>"gsr").text
            assert(browser.find_element(:id=>"gsr").text.include? @@verification_string)
        end
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

