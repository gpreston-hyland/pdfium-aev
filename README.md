#Tsg's internal pdfium build.


#How to build pdfium
##BUILDING PDFIUM FOR WINDOWS:
1. Install GIT, PYTHON, and SUBVERSION
2. Pulldown Chromium depot tools (https://commondatastorage.googleapis.com/chrome-infra-docs/flat/depot_tools/docs/html/depot_tools_tutorial.html#_setting_up)
3. Add depot_tools to the front of your PATH (must be ahead of any installs of Python).
4. From a cmd.exe shell, run the command gclient (without arguments). On first run, gclient will install all the Windows-specific bits needed to work with the code, including msysgit and python.
5. Install Windows SDK version 10.0.19041.1 (Note version will likely change with pdfium updates)
6. Set DEPOT_TOOLS_WIN_TOOLCHAIN=0 in the global environment
7. Create a directory to put pdfium in and run gclient config --unmanaged git@git.tsgrp.com:root/pdfium.git and gclient sync in the command line (Note: this will pull down roughly 4 GB)
8. In the pulldown pdfium folder run "gn args <directory>". Directory can be any location that you want. 
9. This will pull up a file to edit. Put the following properties:
* is_debug = false
* pdf_use_skia = false
* pdf_use_skia_paths = false
* pdf_enable_xfa = false
* pdf_enable_v8 = false
* pdf_is_standalone = true
* is_component_build = false
* clang_use_chrome_plugins = false

10. In the Chromium depot tools (pulled down from step 2) run the following: "ninja -C <directory> pdfium_all". <directory> being the same from step 8
11. This will have created a pdfium_test.exe in the <directory> rename that to pdfium.exe

##BUILDING PDFIUM FOR LINUX
1. Install GIT, PYTHON, and SUBVERSION
2. Pulldown Chromium depot tools (https://commondatastorage.googleapis.com/chrome-infra-docs/flat/depot_tools/docs/html/depot_tools_tutorial.html#_setting_up)
3. Add depot_tools to the front of your PATH (export PATH=/path/to/depot_tools:$PATH).
4. Create a directory to put pdfium in and run gclient config --unmanaged git@git.tsgrp.com:root/pdfium.git and gclient sync in the command line (Note: this will pull down roughly 4 GB)
5. In the pulldown pdfium folder run "gn args <directory>". Directory can be any location that you want. 
6. This will pull up a file to edit. Put the following properties:
* is_debug = false
* pdf_use_skia = false
* pdf_use_skia_paths = false
* pdf_enable_xfa = false
* pdf_enable_v8 = false
* pdf_is_standalone = true
* is_component_build = false
* clang_use_chrome_plugins = false

7. In the Chromium depot tools (pulled down from step 2) run the following: "ninja -C <directory> pdfium_all". <directory> being the same from step 8
8. This will have created a pdfium_test in the <director> rename that to pdfium