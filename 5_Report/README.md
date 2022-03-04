# REPORT

## DESCRIPTION:
Tic-tac-toe is fun,tactic game played on a three-by-three grid by two players, who alternately place the marks X and O in one of the nine spaces in the grid. The objective of Tic Tac Toe is to get three in a row. You play on a three by three game board. The first player is known as X and the second is O. Players alternate placing Xs and Os on the game board until either opponent has three in a row or all nine squares are filled. X always goes first, and in the event that no one has three in a row, the stalemate is called a cat game. We can choose any symbol, as there is not restriction in that & any player can go first.

## REQUIREMENTS

### High Level Requirements</br>

|ID|Description|
|:---|:---|
|HR01|Player1 shall be able to choose 'X' to play.|
|HR02|Player2 shall be able to choose 'O' to play.|
|HR03|Player shall be able to Exit the game.|
|HR04|Player1 shall win/lose.|
|HR05|Player2 shall win/lose.|
|HR06|Game shall end up in a Draw.|

### Low Level Requirements
|ID|Description|HLR ID|
|:---|:---|:---|
|LR01|If the user presses '1', he'll be play with 'X'.|HR01|
|LR02|If the user is playing with 'X', he'll get the first turn.|HR01|
|LR03|If the user presses '2', he'll be play with 'O'.|HR02|
|LR04|If the user is playing with 'O', he'll get the second turn.|HR02|
|LR05|If the user presses '3', it'll exit the game.|HR03|
|LR06|If the player1 gets 3 Xs or 3 Os in vertical,horizontal or diagonal row, User will lose.|HR04|
|LR07|If the player2 gets 3 Xs or 3 Os(as per his choice), in vertical,horizontal or diagonal row, he'll win.|HR05|
|LR08|If the total number of moves, i.e., 9 moves have been completed and player1 nor player2 has won, it'll end up in a draw.|HR06|

### SWOT Analysis:

<img width="563" alt="SWOT" src="https://user-images.githubusercontent.com/98833151/153712194-4c443cc9-2a43-4ec2-8b0d-8e2815cbc976.png">


### 4W's & 1H
#### Who
:point_right: Anyone who wants to play the game.

#### What
:point_right: This game is for fun purpose.

#### When
:point_right: Anytime when user wants to play.

#### Where
:point_right: Can be played anywhere.

#### How
:point_right: By implementing the code using C-program.






## ARCHITECTURE

### Structural Diagrams:

•	Basic Layout:

![layout](https://user-images.githubusercontent.com/98833151/156744812-cb6b94f2-6ce1-4721-8ae3-1ebb44251980.png)


•	Structural Diagram:
  
 <img width="394" alt="Structural Diagram" src="https://user-images.githubusercontent.com/98833151/156744839-00c50ee3-b191-4b8a-8c66-bafa11bb31e4.png">



### Behavioural Diagrams:

•	Block Diagram:

![Behavioral](https://user-images.githubusercontent.com/98833151/156745001-ad6a2024-7310-47c0-a614-105d1412ba24.png)

 
•	USECASE Diagram:
 
![usecase diagram](https://user-images.githubusercontent.com/98833151/156745099-cf2b62a5-2700-4a20-93b1-19d898073555.png)


•	Flowchart:

![flowchart](https://user-images.githubusercontent.com/98833151/156745140-f1ec7c87-dfcc-4bac-9a9f-1d071aefd82a.png)




## Test Plan
* For every feature, define a test case </br>
 :point_right: How to run that feature </br>
 :point_right: Define expected behaviour </br>
 :point_right: Capture the actual result

### Table
* ID, Description of Test case, Input values, Expected Output, Actual Output</br>

#### Table : High level test plan</br>

|Test ID|	Description|	Input values|	Expected Output|
|:------|:-----------|:-------|:-------|
| H_01 |	Check if the layout is created |	Choose the symbol 'X' or 'O'. |	3x3 grid is formed |
| H_02 |	Check if player1/player2 got 3 of his symbols consecutively in vertical, horizontal or diagonal format. |	'X' or 'O' symbols as inputs from the player1/player2. |	The player1/player2 won the game. |
| H_03 |	Check for draw. |	9 inputs from player1 and player2 together. |	Game Over. |

#### Table : Low level test plan</br>

|Test ID|	Description|	Input values|	Expected Output|
|:------|:-----------|:-------|:-------|
|L_01|Checking if a 3X3 grid is drawn or not. This 3X3 grid is the basic need to play the game.|Player1 has to choose the symbol.|	3X3 graph is drawn.|
|L_02|Play proceeds with the player1 or player2 alternately placing their marks in any unoccupied cell. Check if player1/player2 got 3 of his symbols consecutively in vertical, horizontal or diagonal format.|'X' or 'O' input from the player1/player2.|	The player1/player2 won the game.|
|L_03|Check if a total of 9 moves have been made player1 + player2, the game ends up in a draw when neither the user nor the computer is able to get 3 marks in a row.|9 inputs from (player1 + player2).|The game is over.|

### Output:

* Player 1 wins!

<img width="414" alt="OUTPUT_player1_wins" src="https://user-images.githubusercontent.com/98833151/156641079-7ce74684-bc20-4624-b5c4-1105be33cfd3.png">

* Player 2 wins!

<img width="305" alt="OUTPUT_player2_wins" src="https://user-images.githubusercontent.com/98833151/156641117-a974601c-68bb-4e21-82b1-21b190d500c2.png">


 ## CONCLUSION

### LEARNINGS:
📌Learnt about Product development lifecyle and applied it during this project to arrive at a feasible solution.</br>
📌Learnt to use GitHub for storing sharing and evolving the Project content and code.</br>
📌Learnt about different aspects of programming like Multifile programming and backend processing.</br>
📌Learnt about the execution of files in Linux operating system using different commands.</br>
📌Learnt about Unite testing, manual testing and about the efficient way to write a programs.</br>
📌Learnt about the process followed in the industry for solving of a problem.</br>

### Quality Report from Codega:
<img width="614" alt="Codiga" src="https://user-images.githubusercontent.com/98833151/156345909-ad878805-b49f-455a-b378-e7e37b9f76fd.png">
