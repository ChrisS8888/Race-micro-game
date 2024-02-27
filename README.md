Declare variables:
- bank (integer) // to store the user's points
- counter (integer) // to keep track of the number of plays
- wins (integer) // to keep track of the number of wins
- losses (integer) // to keep track of the number of losses

Initialize bank to a starting value (e.g., 100 points)
Initialize counter, wins, and losses to 0

Display welcome message and instructions

Repeat until the user decides to exit:
    Display user's current bank balance
    Prompt the user to make a wager (1 point to bank balance or 'exit' to quit the game)
    If user inputs 'exit':
        Exit the loop
    
    Increment counter by 1
    
    Generate a random outcome (e.g., true/false, high/low)
    Prompt the user to make a guess
    Compare the user's guess with the random outcome
    
    If the user's guess is correct:
        Increase bank by the amount wagered
        Increment wins by 1
        Display a message indicating a win
    Else:
        Decrease bank by the amount wagered
        Increment losses by 1
        Display a message indicating a loss

Display final statistics:
- Number of plays
- Number of wins
- Number of losses
- Final bank balance
