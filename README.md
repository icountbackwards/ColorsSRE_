
# ColorsSRE
------------------
## How to Build

```
git clone https://github.com/icountbackwards/ColorsSRE.git
cd ColorsSRE
mkdir build
cd build
cmake ..
cmake --build . --config Release

./ColorsSRE.exe
```

### Description
ColorsSRE is a software rasterizer engine written in C using **SDL3**. It renders graphics onto the screen by simulating the graphics pipeline entirely with CPU power. Normally this process is done automtically by the computer by leveraging the GPU's parallel computing power. ColorsSRE, as an educational project, attempts to do its own single-threaded implementation of the graphics pipeline from scratch.

One .obj file and one .png file are taken as mesh and texture inputs respectively for the program. The program then does a series of rendering algorithm that returns an array of pixels which is then stored in a frame buffer. for each frame iteration, SDL will display what is stored in said frame buffer.

# Supported features

- Rendering a .obj mesh object file with a .png image as texture
    
- A controllable light source object with Blinn-Phong shading
  
- Controllable camera and object rotation
  
## Keyboard bindings

WASD = Move camera

IJKL + UH = Move light source (H moves light source backwards, U moves light source forward)

Arrow Keys (Left, Right, Up, Down) = Rotate object

B = Reset camera to origin, facing forward (use if mouse moves too far or object is lost)

M = Freeze mouse input (toggle on/off)

ESC = Quit application

# Rendering with custom meshes and textures

To render custom meshes and textures, run the application from the command line:

`ColorsSRE.exe <path_to_obj_file> <path_to_png_file>`

- The .obj file must be in the second argument.

- The .png file must be in the third argument.

  Note: it is recommended to place the .obj and .png files in a the 'assets' folder and access it with `../assets/file_name.objorpng`

- If the program fails to open the files, it will use the default assets instead.

- Any additional arguments are ignored.


