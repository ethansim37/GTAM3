# GTAM 3 Setup Instructions

## Requirements
— Windows computer  
— Python (for local server, needed for map viewer but not for pin dropper)  

## How to download python
1. Visit [the python download website](https://www.python.org/downloads/) and click "Download Python install manager"  
2. Run the app and follow the app's instructions [respond "y" to all prompts except for the last one (view online help)]

### How to download the C++ compiler ([here](https://code.visualstudio.com/docs/cpp/config-mingw#_prerequisites) for detailed instructions)
1. Click the [direct downloader.exe](https://github.com/msys2/msys2-installer/releases/download/2025-08-30/msys2-x86_64-20250830.exe)
2. Follow the instructions of the installation wizard
   — Choose the desired installation folder, I recommend creating a folder in C: (located under "this PC") named "cppCompiler" then downloading here
3. Choose the default option for start menu folder
4. The terminal will then automatically open
5. Paste:

   ````
   pacman - S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
6. Press enter when prompted with "Enter a selection (default=all):
7. Enter Y when prompted whether to proceed with the installation
8. Add the path of the windows compiler to your system

    a. In the app search bar, look for Edit environment variables for your account
   
    b. Go to user variables -> Path, then click edit
   
    c. Select new and add the following path: ...\ucrt64\bin

   — If you placed the file in the previously reccomended location, your adress would look like
   
   ````
   C:\cppCompiler\ucrt64\bin
9. Verify your installation was successful by entering "gcc --version" into the terminal

   a. If an error shows, visit the [vscode instructions](https://code.visualstudio.com/docs/cpp/config-mingw#_prerequisites) for troubleshooting


## How to download GTAM3
1. Create a folder in your local downloads folder named GTAM 3 (it must be named "GTAM 3" exactly and in your "downloads")
2. Click the green "Code" button on the top of this page
3. Click "download zip"
4. Once the zip is downloaded, extract all files into the folder named GTAM 3 in your downloads

## How to Run the C++ Program
1. If it is the first time running on this computer:
   
   a. Open the GTAM 3 folder in the terminal (right click the "GTAM 3" folder and click "open in terminal")
   
   b. Paste:
   ````
   g++ main.cpp -o GTAM_Point_Dropper
4. If it is not the first time runnong double click the GTAM_Point_Dropper.exe file in the GTAM 3 folder. This will launch the app
5. Follow instructions given by the app

## How to View the Map
1. Open PowerShell in this folder  
2. Start a local server by pasting

   ````
   python -m http.server 8000
5. Open your browser and visit: http://localhost:8000/
6. On the top left, input the name of the file you previously used/created on the pin dropper app (do not put entire adress of the file, just the name)  
