# gba-free-fonts
Free font resources for GBA game developemnt

This repo contains many free-to-use fonts which are ready-to-use in your GBA project.

*History: it starts [here](https://github.com/GValiente/butano/pull/18).*

## Fonts & Licenses

|Name|License|Characters|Preview|
|---|---|---|---|
|[HanaMin(Hanazono Mincho) / 花園明朝 / 花园宋体](http://fonts.jp/hanazono/)|[Hanazono Font License + SIL OFL 1.1](https://github.com/laqieer/gba-free-fonts/blob/main/licenses/HanaMin.txt)|101912|![butano-6](https://user-images.githubusercontent.com/8841957/153766387-8777579a-e9fa-43b1-bf28-30134a80b758.png)|
|[GNU Unifont](http://unifoundry.com/unifont/index.html)|[GNU GPLv2+ with the GNU Font Embedding Exception + SIL OFL 1.1](https://github.com/laqieer/gba-free-fonts/blob/main/licenses/Unifont.txt)|78934|![butano-1](https://user-images.githubusercontent.com/8841957/153765067-a994484b-317a-4965-877f-e964300d6f64.png)|
|[BabelStone Han](https://www.babelstone.co.uk/Fonts/Han.html)|[Arphic Public License](https://github.com/laqieer/gba-free-fonts/blob/main/licenses/BabelStoneHan.txt)|59664|![butano-2](https://user-images.githubusercontent.com/8841957/153765075-3ea383e3-2e30-4fa8-964b-b68d792b186c.png)|
|[Source Han Serif / 思源宋体 / 思源宋體 / 源ノ明朝 / 본명조](https://source.typekit.com/source-han-serif/)|[SIL OFL 1.1](https://github.com/laqieer/gba-free-fonts/blob/main/licenses/SourceHanSerif.txt)|44748|![butano-3](https://user-images.githubusercontent.com/8841957/153765082-a43b5ed0-0ffa-45e2-9020-393b2e20b040.png)|
|[Source Han Sans / 思源黑体 / 思源黑體 / 源ノ角ゴシック / 본고딕](https://github.com/adobe-fonts/source-han-sans)|[SIL OFL 1.1](https://github.com/laqieer/gba-free-fonts/blob/main/licenses/SourceHanSans.txt)|42222|![butano-4](https://user-images.githubusercontent.com/8841957/153765091-42e9c55f-f4fa-449d-a4c8-7e0225de5a97.png)|
|[Source Han Mono / 思源等宽 / 思源等寬 / 源ノ等幅 / 본모노](https://github.com/adobe-fonts/source-han-mono)|[SIL OFL 1.1](https://github.com/laqieer/gba-free-fonts/blob/main/licenses/SourceHanMono.txt)|44798|![butano-5](https://user-images.githubusercontent.com/8841957/153765098-8fef30d5-769a-4cc2-83ad-1b6cee7f296e.png)|
|[WQY(Wen Quan Yi)(Spring of Letters) Zen Hei / 文泉驿正黑](http://wenq.org/wqy2/index.cgi?ZenHei)|[GPL](https://github.com/laqieer/gba-free-fonts/blob/main/licenses/WQYZenHei.txt)|42285||
|[WQY(Wen Quan Yi)(Spring of Letters) Micro Hei / 文泉驿微米黑](http://wenq.org/wqy2/index.cgi?MicroHei)|[APL 2.0](https://github.com/laqieer/gba-free-fonts/blob/main/licenses/WQYMicroHei.1.txt) + [GNU GPLv3 with font embedding exceptions](https://github.com/laqieer/gba-free-fonts/blob/main/licenses/WQYMicroHei.2.txt)|34600||


## Guide

### For [Butano](https://github.com/GValiente/butano)

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
2. Set path in `Mekefile`
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

## [Others](https://github.com/laqieer/gba-free-fonts/blob/main/others.md)
