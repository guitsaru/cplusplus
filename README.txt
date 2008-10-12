= cplusplus

* http://github.com/guitsaru/cplusplus

== DESCRIPTION:

Generators for C++ files.

== FEATURES/PROBLEMS:

* Generates C++ files and class files.
* Includes tests via cppunit.

Note, the makefile generated is very generic and will more than likely need to be changed to to use with any sufficiently sized project.

== SYNOPSIS:

cplusplus project_name
script/generate class class_name
script/generate file file_name

Build the project with Rake or generate a makefile with rake makefile.

== REQUIREMENTS:

* Need to have cppunit installed for unit tests

== INSTALL:

* sudo gem install cplusplus

== LICENSE:

(The MIT License)

Copyright (c) 2008 Matt Pruitt

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
'Software'), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.