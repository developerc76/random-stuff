## Linux Configuration (GNOME DE) DEBIAN

### Extensions

Install Gnome-Tweaks and Gnome-Extension-Manager

[Install User Themes](https://extensions.gnome.org/extension/19/user-themes/)

[Install AppIndicator and KStatusNotifierItem Support](https://extensions.gnome.org/extension/615/appindicator-support/)


OPTIONAL: 

*  [Install Vitals](https://extensions.gnome.org/extension/1460/vitals/)

*  [Install App Menu](https://extensions.gnome.org/extension/6/applications-menu/)


### Fonts

[Install Inter](https://fonts.google.com/specimen/Inter) as a System Font (11)

[Install Jetbrains-Mono](https://www.jetbrains.com/lp/mono/) as the Terminal / Monospace Font (13)


### Themes and Icons

GTK Theme: Adwaita

Icon Theme: [WhiteSur-Dark](https://github.com/vinceliuice/whitesur)

### Other Config

Install [Oh My BASH!](https://ohmybash.github.io/) in which I use the robbyrussell theme. 

PLEASE TURN OFF TERMINAL SOUNDS


#### My .vimrc File: 

```vimscript
colorscheme default
syntax on
set number
set hlsearch
set incsearch
```

REMOVE THE DEFAULT INSTALLED APPS LIKE GAMES, OTHER USELESS TERMINALS, ETC. 

**VSCode**

Extensions: 

* GitHub Theme (Dark Default not Dark or Dark Dimmed)

* C/C++ (Without the extension pack)

* Python (Without the extension pack)

* Rainbow CSV

### LINUX DISTROS

* Ubuntu 22.04 LTS & 24.04 LTS (used up to kernel 6.11)

* Fedora 41 & 42 (used up to kernel 6.16.9 or so)

* Debian 12 (oldstable, lts kernel, current distro of choice :) )

### IMPORTANT PACKAGES

* neofetch

* git

* wget & curl

### NOTES

* Make sure package manager repos are configured correctly (and include NordVPN, Chrome repos)

* VMWare Workstation Pro is a .bundle installed from BroadCom -> Auto Updates (idk its just different ig)

* Make sure to keep your distro minimal meaning if we don't need a huge rust toolchain and java environments with jdks and sdks then we don't have them (remove or don't install)

* Use GNOME Terminal - it's just good - like all of the others look and feel good but none are practical enough & work well enough (w/o extreme config - im talking about you kitty)

* JetBrains IDEs are somewhat useful, only if they are needed. VSCode is lighter, faster, and more versatile
 
* Install the Discord .deb **FLATPAKS are not the most useful...umm sorry MESA**

* Install VLC or else

* Gnome-clocks is pretty useful for offline timer ngl

* Have sound recorder and cheese (camera) - theyre useful

* Don't over customize - a distro should be one where we install the files, transfer the files, and don't troubleshoot too much to get everything to work properly

* **ALWAYS USE EITHER APPARMOR OR SELINUX** or install security tools like clamav, rkhunter, etc. 

