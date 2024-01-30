# LightYears Game

## Core Dependencies
- GCC (GNU Compiler Collection)
- CMake (Cross-platform make)
- Make (Build control tool)

## SFML Dependencies

### Graphics
- **OpenGL**: For rendering graphics.
    - Debian/Ubuntu: `libgl1-mesa-dev`

### Windowing
- **X11**: For windowing on Unix-like systems.
    - Debian/Ubuntu: `libx11-dev`
- **Xrandr**: For managing screen resolution, rotation, and reflection.
    - Debian/Ubuntu: `libxrandr-dev`

### Fonts
- **freetype**: For font rendering.
    - Debian/Ubuntu: `libfreetype6-dev`

### Device Input
- **Udev**: For managing devices.
    - Debian/Ubuntu: `libudev-dev`

### Audio
- **FLAC**: Free Lossless Audio Codec library.
    - Debian/Ubuntu: `libflac-dev`
- **Vorbis**: Audio compression codec library.
    - Debian/Ubuntu: `libvorbis-dev`
- **OpenAL**: Cross-platform 3D audio API.
    - Debian/Ubuntu: `libopenal-dev`

To install all required dependencies for the LightYears game project on WSL using Ubuntu/Debian, run the following command:

```bash
sudo apt-get update
sudo apt-get install build-essential cmake libgl1-mesa-dev libx11-dev libxrandr-dev libfreetype6-dev libudev-dev libflac-dev libvorbis-dev libopenal-dev
```