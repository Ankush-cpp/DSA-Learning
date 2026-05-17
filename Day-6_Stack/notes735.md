# Asteroid Collision (LC 735)

## Approach
- Use stack for simulation
- Collision occurs when:
  - stack top > 0
  - current asteroid < 0

## Cases
- Smaller asteroid explodes
- Equal size both explode
- Larger survives

## Complexity
- Time: O(n)
- Space: O(n)

## Key Learning
Stack helps simulate chain reactions efficiently.