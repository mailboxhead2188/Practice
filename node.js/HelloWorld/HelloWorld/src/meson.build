helloworld_sources = [
  'main.c',
  'helloworld-window.c',
]

helloworld_deps = [
  dependency('gio-2.0', version: '>= 2.50'),
  dependency('gtk+-3.0', version: '>= 3.22'),
]

gnome = import('gnome')

helloworld_sources += gnome.compile_resources('helloworld-resources',
  'helloworld.gresource.xml',
  c_name: 'helloworld'
)

executable('helloworld', helloworld_sources,
  dependencies: helloworld_deps,
  install: true,
)
