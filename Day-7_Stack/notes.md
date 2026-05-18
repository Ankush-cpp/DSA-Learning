# Min Stack (LC 155)

## Approach
- Use two stacks:
  - Main stack
  - Min stack

## Operations
- Push:
  - Insert normally
  - Push into min stack if value <= current min

- Pop:
  - Remove from min stack if popped element is minimum

## Complexity
- Push: O(1)
- Pop: O(1)
- Top: O(1)
- getMin: O(1)

## Key Learning
Auxiliary stack helps maintain minimum efficiently.