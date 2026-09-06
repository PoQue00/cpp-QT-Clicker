# Clicker

A lightweight Qt-based clicker game written in C++. This project is a small desktop game prototype where the player earns points by clicking, buys upgrades, and saves progress between sessions.

## Overview

The game starts in a simple main menu with three actions:

- New Game
- Load Game
- Quit

Once a new game begins, the player can:

- Click the `+Points` button to gain points manually
- Increase points per click (`PPC`)
- Increase points per second (`PPS`)
- Save and load progress using the file menu
- Return to the main menu or reset stats

The project is built using Qt 6 and CMake, making it easy to compile on desktop platforms that support Qt.

## Features

- Clicker-style progression loop
- `PPC` and `PPS` upgrade system
- Auto-incrementing points over time via a `QTimer`
- Save/load support using JSON files
- Main menu flow for new game and continue game
- Qt desktop UI built with `.ui` files
- Minimal dependency footprint

## Project Structure

```text
Clicker/
├── CMakeLists.txt
├── main.cpp
├── mainmenu.cpp
├── mainmenu.h
├── mainmenu.ui
├── mainwindow.cpp
├── mainwindow.h
├── mainwindow.ui
├── test.cpp
├── README.md
├── build/
│   └── Desktop_x86_windows_msys_pe_64bit_Debug/
└── save.json   (generated at runtime when saving)
```

## Key Files

- [CMakeLists.txt](CMakeLists.txt) — CMake project configuration and Qt dependencies
- [main.cpp](main.cpp) — application entry point
- [mainmenu.h](mainmenu.h) and [mainmenu.cpp](mainmenu.cpp) — main menu window logic
- [mainwindow.h](mainwindow.h) and [mainwindow.cpp](mainwindow.cpp) — game logic and UI interactions
- [mainwindow.ui](mainwindow.ui) — main game interface layout
- [mainmenu.ui](mainmenu.ui) — menu screen layout

## Gameplay Loop

The game tracks three values:

- `pts` — current total points
- `ppc` — points gained per click
- `pps` — points gained per second

At startup, the player has:

- `pts = 0`
- `ppc = 1`
- `pps = 0`

Every second, the timer adds `pps` to `pts` and updates the labels on screen. The player can manually click to gain `ppc` points at a time, and buy upgrades in the shop.

## Shop and Upgrades

The shop is implemented as a left-side `QDockWidget` and contains:

- Buy 1 PPC for 30 points
- Buy 1 PPS for 50 points

These actions reduce the current point total and increase the respective upgrade values.

## Save System

Progress is saved to a JSON file named `save.json` in the working directory of the running app.

Saved data includes:

- `pts`
- `ppc`
- `pps`

The save logic is handled in [mainwindow.cpp](mainwindow.cpp), and the load logic is triggered from both the menu and the game screen.

## Requirements

To build this project, you need:

- C++ compiler
- CMake 3.19 or newer
- Qt 6.5 or newer
- Qt6 Core and Qt6 Widgets modules

This project is configured specifically for Qt 6 with `find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)`.

## Build Instructions

### Windows (using CMake and Qt)

From the project root:

```bash
cmake -S . -B build
cmake --build build
```

Then run the executable from the build output folder, typically something like:

```bash
./build/Desktop_x86_windows_msys_pe_64bit_Debug/Clicker.exe
```

### Alternative build flow

```bash
cmake -S . -B build -G Ninja
cmake --build build
```

## Run the Game

After building:

1. Start the generated executable.
2. Select `New Game` from the main menu.
3. Click to earn points and purchase upgrades.
4. Use the menu actions in the top bar to save, load, reset stats, or return to the menu.

## Controls

### Main Menu

- `New Game` — starts a new session
- `Load Game` — loads the saved JSON state
- `Quit` — closes the application

### Main Game

- `+Points` — adds `PPC` points to `pts`
- Shop button — opens the upgrade dock panel
- File menu:
  - Save
  - Load
  - Reset Stats
  - Main Menu
  - Quit

## Known Notes

This project is a compact demo rather than a polished commercial game. Some aspects are intentionally minimal, including:

- static UI layout rather than responsive design
- no advanced balancing or progression systems
- no explicit license file
- simplistic save file handling tied to the app working directory

## Future Ideas

Possible improvements include:

- upgrade shop with multiple item tiers and pricing formulas
- better save validation and error handling
- sound effects and improved UI styling
- more game systems such as achievements or unlockables
- stronger architecture separation between logic and UI

## License

This project does not currently include a license file, so it should be treated as unlicensed unless otherwise specified by the project owner.
