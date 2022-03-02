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
| H_02 |	Check if player/computer got 3 of his symbols consecutively in vertical, horizontal or diagonal format. |	'X' or 'O' symbols as inputs from the player/computer. |	The player/computer won the game. |
| H_03 |	Check for draw. |	9 inputs from player and computer together. |	Game Over. |

Table : Low level test plan</br>

|Test ID|	Description|	Input values|	Expected Output|
|:------|:-----------|:-------|:-------|
|L_01|Checking if a 3X3 grid is drawn or not. This 3X3 grid is the basic need to play the game.|Player has to choose the symbol.|	3X3 graph is drawn.|
|L_02|Play proceeds with the player or computer alternately placing their marks in any unoccupied cell. Check if player/computer got 3 of his symbols consecutively in vertical, horizontal or diagonal format.|'X' or 'O' input from the player/computer.|	The player/computer won the game.|
|L_03|Check if a total of 9 moves have been made player+computer, the game ends up in a draw when neither the user nor the computer is able to get 3 marks in a row.|9 inputs from (player+computer).|The game is over.|

## Output:
* Player wins:
<img width="415" alt="Output" src="https://user-images.githubusercontent.com/98833151/153709278-a8e2a181-dbe0-4857-a458-aff2b70cfd9f.png">

* Computer wins:
<img width="466" alt="Output_loss" src="https://user-images.githubusercontent.com/98833151/156350286-fc3c081b-fbf6-45b5-94c1-3313a7182a38.png">

