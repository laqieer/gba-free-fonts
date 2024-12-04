# gba-free-fonts

[![Build CI](https://github.com/laqieer/gba-free-fonts/actions/workflows/build.yml/badge.svg)](https://github.com/laqieer/gba-free-fonts/actions/workflows/build.yml)

Free font resources for GBA game development

This repo contains many free-to-use fonts which are ready-to-use in your GBA project.

**Note:** source code are under [zlib license](https://github.com/laqieer/gba-free-fonts/blob/main/LICENSE), fonts are under their own licenses.

## Fonts & Licenses

|Font|License|Characters|Preview|
|---|---|---|---|
|[HanaMin(Hanazono Mincho) / 花園明朝 / 花园宋体](http://fonts.jp/hanazono/)|[Hanazono Font License + SIL OFL 1.1](https://github.com/laqieer/gba-free-fonts/blob/main/licenses/HanaMin.txt)|101912|![](https://user-images.githubusercontent.com/8841957/153871980-5ab179f1-b13c-4c08-89cb-45e28936e4aa.png)|
|[GNU Unifont](http://unifoundry.com/unifont/index.html)|[GNU GPLv2+ with the GNU Font Embedding Exception](https://github.com/laqieer/gba-free-fonts/blob/main/licenses/Unifont.1.txt) + [SIL OFL 1.1](https://github.com/laqieer/gba-free-fonts/blob/main/licenses/Unifont.2.txt)|78934|![](https://user-images.githubusercontent.com/8841957/153871992-f420e32d-caa5-4802-9d17-4850b5fa20a9.png)|
|[Unscii](http://viznut.fi/unscii/)|[GNU GPLv2+ with the GNU Font Embedding Exception](https://github.com/laqieer/gba-free-fonts/blob/main/licenses/Unscii.txt)|64315|![](https://user-images.githubusercontent.com/8841957/153871997-d65dd80c-1b46-455a-ade1-820a33b746e4.png)|
|[BabelStone Han](https://www.babelstone.co.uk/Fonts/Han.html)|[Arphic Public License](https://github.com/laqieer/gba-free-fonts/blob/main/licenses/BabelStoneHan.txt)|59664|![](https://user-images.githubusercontent.com/8841957/153872000-ef8e0ec2-92fc-45f7-a59d-e487eff816ec.png)|
|[Source Han Serif(Noto Serif CJK) / 思源宋体 / 思源宋體 / 源ノ明朝 / 본명조](https://source.typekit.com/source-han-serif/)|[SIL OFL 1.1](https://github.com/laqieer/gba-free-fonts/blob/main/licenses/SourceHanSerif.txt)|44748|![](https://user-images.githubusercontent.com/8841957/153872005-534dde41-d386-4845-b1b4-896b330821f6.png)|
|[Source Han Sans(Noto Sans CJK) / 思源黑体 / 思源黑體 / 源ノ角ゴシック / 본고딕](https://github.com/adobe-fonts/source-han-sans)|[SIL OFL 1.1](https://github.com/laqieer/gba-free-fonts/blob/main/licenses/SourceHanSans.txt)|42222|![](https://user-images.githubusercontent.com/8841957/153872007-c0a80d8c-19ab-42dd-bab4-46b29307be82.png)|
|[Source Han Mono / 思源等宽 / 思源等寬 / 源ノ等幅 / 본모노](https://github.com/adobe-fonts/source-han-mono)|[SIL OFL 1.1](https://github.com/laqieer/gba-free-fonts/blob/main/licenses/SourceHanMono.txt)|44798|![](https://user-images.githubusercontent.com/8841957/153872011-12e3255f-f428-4666-9581-d499efd4f071.png)|
|[WQY(Wen Quan Yi)(Spring of Letters) Zen Hei / 文泉驿正黑](http://wenq.org/wqy2/index.cgi?ZenHei)|[GPL](https://github.com/laqieer/gba-free-fonts/blob/main/licenses/WQYZenHei.txt)|42285|![](https://user-images.githubusercontent.com/8841957/153872014-4d8ebd89-47a8-4335-a60f-00c671688e52.png)|
|[WQY(Wen Quan Yi)(Spring of Letters) Micro Hei / 文泉驿微米黑](http://wenq.org/wqy2/index.cgi?MicroHei)|[Apache License 2.0](https://github.com/laqieer/gba-free-fonts/blob/main/licenses/WQYMicroHei.1.txt) + [GNU GPLv3 with font embedding exceptions](https://github.com/laqieer/gba-free-fonts/blob/main/licenses/WQYMicroHei.2.txt)|34600|![](https://user-images.githubusercontent.com/8841957/153872015-6bf8402f-a23a-48d1-811f-43b02146fd3f.png)|

## Guide

### For [Butano](https://github.com/GValiente/butano)

[This is an example](https://github.com/laqieer/gba-dev-best-practice/commit/01f91a3e08a6f61ec0c0b8fbb60eab62121172fc) to show how to use a font in your project.

1. Install [Pillow](https://pillow.readthedocs.io/en/stable/installation.html)
```sh
# For MSYS2/MinGW-w64 users
pacman -S mingw-w64-x86_64-python-pillow
# For WSL2/Ubuntu/Debian users
sudo apt-get install python3-pil
# For Mac users
brew install pillow
# For FreeBSD users
pkg install py38-pillow
# For CentOS users
yum install python3-pillow
# For Fedora Linux users
dnf install python3-pillow
# For Arch Linux users
pacman -S python37-pillow
```
2. Set path in `Makefile`
```Makefile
# FONTS is a list of directories containing font files.
FONTS       :=  
# TEXTS is a list of directories or filenames containing text files.
TEXTS       :=  
```
3. Bind it to a `bn::sprite_text_generator` in source code
```C++
#include "xxx_sprite_font.h"
bn::sprite_text_generator text_generator(xxx_sprite_font);
```

## Others

[Free-to-use 1bpp dot matrix fonts](https://github.com/laqieer/gba-free-fonts/blob/main/others.md) 

## History
This project starts [here](https://github.com/GValiente/butano/pull/18).
