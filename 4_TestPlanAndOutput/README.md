# Test Plan
* For every feature, define a test case </br>
 :point_right: How to run that feature </br>
 :point_right: Define expected behaviour </br>
 :point_right: Capture the actual result

# Table
* ID, Description of Test case, Input values, Expected Output, Actual Output</br>

Table : High level test plan</br>

|Test ID|	Description|	Input values|	Expected Output|
|:------|:-----------|:-------|:-------|
| H_01 |	Check if the layout is created |	Choose the symbol 'X' or 'O'. |	3x3 grid is formed |
| H_02 |	Check if player1/player2 got 3 of his symbols consecutively in vertical, horizontal or diagonal format. |	'X' or 'O' symbols as inputs from the player1/player2. |	The player1/player2 won the game. |
| H_03 |	Check for draw. |	9 inputs from player1 and player2 together. |	Game Over. |

Table : Low level test plan</br>

|Test ID|	Description|	Input values|	Expected Output|
|:------|:-----------|:-------|:-------|
|L_01|Checking if a 3X3 grid is drawn or not. This 3X3 grid is the basic need to play the game.|Player1 has to choose the symbol.|	3X3 graph is drawn.|
|L_02|Play proceeds with the player1 or player2 alternately placing their marks in any unoccupied cell. Check if player1/player2 got 3 of his symbols consecutively in vertical, horizontal or diagonal format.|'X' or 'O' input from the player1/player2.|	The player1/player2 won the game.|
|L_03|Check if a total of 9 moves have been made player1 + player2, the game ends up in a draw when neither the user nor the computer is able to get 3 marks in a row.|9 inputs from (player1 + player2).|The game is over.|

## Output:

Player 1 wins!

<img width="414" alt="OUTPUT_player1_wins" src="https://user-images.githubusercontent.com/98833151/156641079-7ce74684-bc20-4624-b5c4-1105be33cfd3.png">

Player 2 wins!

<img width="305" alt="OUTPUT_player2_wins" src="https://user-images.githubusercontent.com/98833151/156641117-a974601c-68bb-4e21-82b1-21b190d500c2.png">
