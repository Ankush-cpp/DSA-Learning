# Linked List Cycle (LC 141)

## Approach
Use Floyd’s algorithm:
- Slow moves 1 step
- Fast moves 2 steps
- If they meet → cycle exists

## Complexity
- Time: O(n)
- Space: O(1)

## Key Learning
Cycle detection without extra memory.