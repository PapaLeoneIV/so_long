# So Long - 42 School Project

Welcome to the "So Long" project! This project is part of the curriculum at 42 School and is aimed at deepening your understanding of working with C and developing a simple 2D game.

## Table of Contents

- [Introduction](#introduction)
- [Goals](#goals)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Project Structure](#project-structure)
- [Building the Project](#building-the-project)
- [How to Play](#how-to-play)
- [Resources](#resources)
- [Contributing](#contributing)
- [License](#license)

## Introduction

The "So Long" project is a basic 2D game where the player must navigate a character through a maze to reach the exit while collecting items along the way. The game is built using the **MiniLibX** library and is an excellent introduction to game development concepts, including rendering, event handling, and basic AI.

## Goals

- Gain proficiency in working with **MiniLibX**.
- Understand 2D game mechanics.
- Practice handling inputs, rendering graphics, and managing game states.
- Develop problem-solving and debugging skills in C.

## Requirements

Before you begin, ensure you have met the following requirements:

- A working installation of **MiniLibX**.
- Basic knowledge of C programming.
- Familiarity with Makefiles.
- Access to a UNIX-based environment (e.g., macOS or Linux).

## Getting Started

To get a local copy of the project up and running, follow these simple steps:

1. **Clone the repository:**
   ```sh
   git clone https://github.com/yourusername/so_long.git

## Install dependencies
Make sure you have installed the required dependencies for MiniLibX. You can install MiniLibX with the following commands:
1. **For Linux:**
 ```sh
sudo apt-get install libxext-dev libx11-dev libbsd-dev
```

## Compile the project using the provided Makefile:
 ```sh
make
```
This will generate the so_long executable.

## Run the game
 ```sh
./so_long [map_file.ber]
```
Replace [map_file.ber] with the path to your .ber map file. A sample map file is usually provided in the maps directory.

## How to Play

Follow these simple steps to navigate through the game:

- **Move Your Character**: Use the arrow keys ⬆️⬇️⬅️➡️ to move your character around the map.
- **Collect Items**: Aim to collect all the items 🌟 scattered throughout the map.
- **Beware of Enemies**: Keep away from enemies! Contact with any enemy will result in a game over 🚫.
- **Reach the Exit**: Successfully navigate to the exit 🚪 after collecting all items to win the game.
- **Game Over Conditions**: The game ends if your character touches an enemy or fails to collect all items before reaching the exit.

Master these steps to excel and enjoy the game!

