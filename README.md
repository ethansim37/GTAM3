# GTAM 3 Setup Instructions

## Requirements
- Windows computer
- g++ compiler (install via MinGW or similar)
- Python (for local server, needed for map viewer)

## How to Run the C++ Program
1. Open PowerShell in this folder.
2. Compile the program:
   g++ main.cpp -o GTAM_Point_Dropper
3. Run the program:
   .\GTAM_Point_Dropper.exe

## How to View the Map
1. Open PowerShell in this folder.
2. Start a local server:
   python -m http.server 8000
3. Open your browser and go to:
   http://localhost:8000/GTAM3%20Viewer.html              ************************** maybe it's actually http://localhost:8000/

## Notes
- The C++ program will update LocationData.json.
- The map viewer will display pins for all saved locations.
