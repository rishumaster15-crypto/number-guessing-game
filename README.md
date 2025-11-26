# number-guessing-game
Number Guessing Game (Modified Version)

This is an improved and interactive Number Guessing Game written in C.
The game generates a random number between 1 and 100, and the player must guess it within a limited number of attempts.

✨ Features

🎲 Random number every round

🔁 Replay option (play as many times as you want)

📊 Scoring system (fewer attempts = more points)

⏳ Limited attempts (15 per round)

🔼 Hint system (too high / too low)

🕹 Gameplay Rules

The computer picks a random number from 1 to 100

You get 7 chances to guess the correct number

After every wrong guess, a hint is given:

Too high

Too low

Points are awarded based on how quickly you guess the number

After each round, you can choose to play again or exit

💻 How to Compile & Run
Using GCC
gcc number_guessing.c -o number_guessing
./number_guessing

Using Windows (MinGW)
gcc number_guessing.c -o number_guessing.exe
number_guessing.exe

📌 Code

The full source code is already included in the project.
File name example: number_guessing.c

🏆 Scoring System
Attempts Used	Points Awarded
1	70
2	60
3	50
4	40
5	30
6	20
7	10
🔮 Future Improvements (optional ideas)

You can upgrade this project further by adding:

Difficulty levels (Easy / Medium / Hard)

Timer-based scoring

Multiplayer mode
simple output 
<img width="337" height="670" alt="image" src="https://github.com/user-attachments/assets/0b29eec3-31ae-40e3-9b56-5419df279f36" />


File saving high scores

GUI version using SDL / GTK
