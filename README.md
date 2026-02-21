# GTAM 3 Setup Instructions

## Requirements
— Windows computer  
— Python (for local server, needed for map viewer but not for pin dropper)  

## How to download python
1. Visit [the python download website](https://www.python.org/downloads/) and click "Download Python install manager"  
2. Run the app and follow the app's instructions [respond "y" to all prompts except for the last one (view online help)]

## How to download GTAM3
1. Create a folder in your local downloads folder named GTAM 3 (it must be named "GTAM 3" exactly and in your "downloads")
2. Click the green "Code" button on the top of this page
3. Click "download zip"
4. Once the zip is downloaded, extract all files into the folder named GTAM 3 in your downloads

## How to Run the C++ Program
1. Double click the GTAM_Point_Dropper.exe file in the GTAM 3 folder. This will launch the app
6. Follow instructions given by the app

## How to View the Map
1. Open PowerShell in this folder  
2. Start a local server by pasting

   ````
   python -m http.server 8000
5. Open your browser and visit: http://localhost:8000/
6. On the top left, input the name of the file you previously used/created on the pin dropper app (do not put entire adress of the file, just the name)  
