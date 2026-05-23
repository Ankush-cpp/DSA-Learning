# Implement Queue using Stacks (LC 232)

## Approach
- Use two stacks:
  - input stack
  - output stack

## Logic
- Push into input
- For pop/peek:
  - Transfer elements if output is empty

## Complexity
- Amortized O(1)

## Key Learning
Stack reversal helps simulate queue behavior.