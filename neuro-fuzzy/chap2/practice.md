# Problem 2
Show the calculation process by hand calculation.

### Fuzzy Relation R
| B\A | Apple | Orange | Water<br>melon | Banana |
| - | - | - | - | - |
| Circle | 0.6 | 0.5 | 1.0 | 0.0 |
| Slender | 0.0 | 0.0 | 0.0 | 1.0 |
| Flat | 0.4 | 1.0 | 0.0 | 0.0 |
| Big | 0.4 | 0.2 | 1.0 | 0.2 |
| Small | 0.7 | 1.0 | 0.2 | 0.2 |

## Case 1
$B = [0.7, 0.0, 0.0, 0.8, 0.0]$
$A = ?$

$$
R^{T} \cdot S = 
	\left[\begin{array}{c c c c c}
		0.6, 0.0, 0.4, 0.4, 0.7 \\
		0.5, 0.0, 1.0, 0.2, 1.0 \\
		1.0, 0.0, 0.0, 1.0, 0.2 \\
		0.0, 1.0, 0.0, 0.2, 0.2
	\end{array}\right]
	\cdot
	\left[\begin{array}{c}
		0.7 \\
		0.0 \\
		0.0 \\
		0.8 \\
		0.0
	\end{array}\right] \\
=
	\left[\begin{array}{c c c c c}
		max\{ min(0.6, 0.7), min(0.0, 0.0), min(0.4, 0.0), min(0.4, 0.8), min(0.7, 0.0) \} \\
		max\{ min(0.5, 0.7), min(0.0, 0.0), min(1.0, 0.0), min(0.2, 0.8), min(1.0, 0.0) \} \\
		max\{ min(1.0, 0.7), min(0.0, 0.0), min(0.0, 0.0), min(1.0, 0.8), min(0.2, 0.0) \} \\
		max\{ min(0.0, 0.7), min(1.0, 0.0), min(0.0, 0.0), min(0.2, 0.8), min(0.2, 0.0) \}
	\end{array}\right] \\
=
	\left[\begin{array}{c}
		0.6 \\
		0.5 \\
		0.8 \\
		0.2
	\end{array}\right]
$$

Apple: 0.6
Orange: 0.5
Watermelon: 0.8
Banana: 0.2

$A = Watermelon$

## Case 2
$B = [0.5, 0.3, 0.6, 0.0, 0.9]$
$A = ?$

$$
R^{T} \cdot S = 
	\left[\begin{array}{c c c c c}
		0.6, 0.0, 0.4, 0.4, 0.7 \\
		0.5, 0.0, 1.0, 0.2, 1.0 \\
		1.0, 0.0, 0.0, 1.0, 0.2 \\
		0.0, 1.0, 0.0, 0.2, 0.2
	\end{array}\right]
	\cdot
	\left[\begin{array}{c}
		0.5 \\
		0.3 \\
		0.6 \\
		0.0 \\
		0.9
	\end{array}\right] \\
=
	\left[\begin{array}{c c c c c}
		max\{ min(0.6, 0.5), min(0.0, 0.3), min(0.4, 0.6), min(0.4, 0.0), min(0.7, 0.9) \} \\
		max\{ min(0.5, 0.5), min(0.0, 0.3), min(1.0, 0.6), min(0.2, 0.0), min(1.0, 0.9) \} \\
		max\{ min(1.0, 0.5), min(0.0, 0.3), min(0.0, 0.6), min(1.0, 0.0), min(0.2, 0.9) \} \\
		max\{ min(0.0, 0.5), min(1.0, 0.3), min(0.0, 0.6), min(0.2, 0.0), min(0.2, 0.9) \}
	\end{array}\right] \\
=
	\left[\begin{array}{c}
		0.7 \\
		0.9 \\
		0.5 \\
		0.3
	\end{array}\right]
$$

Apple: 0.7
Orange: 0.9
Watermelon: 0.5
Banana: 0.3

$A = Orange$

## Case 3
$B = [0.0, 0.8, 0.0, 0.3, 0.5]$
$A = ?$

$$
R^{T} \cdot S = 
	\left[\begin{array}{c c c c c}
		0.6, 0.0, 0.4, 0.4, 0.7 \\
		0.5, 0.0, 1.0, 0.2, 1.0 \\
		1.0, 0.0, 0.0, 1.0, 0.2 \\
		0.0, 1.0, 0.0, 0.2, 0.2
	\end{array}\right]
	\cdot
	\left[\begin{array}{c}
		0.0 \\
		0.8 \\
		0.0 \\
		0.3 \\
		0.5
	\end{array}\right] \\
=
	\left[\begin{array}{c c c c c}
		max\{ min(0.6, 0.0), min(0.0, 0.8), min(0.4, 0.0), min(0.4, 0.3), min(0.7, 0.5) \} \\
		max\{ min(0.5, 0.0), min(0.0, 0.8), min(1.0, 0.0), min(0.2, 0.3), min(1.0, 0.5) \} \\
		max\{ min(1.0, 0.0), min(0.0, 0.8), min(0.0, 0.0), min(1.0, 0.3), min(0.2, 0.5) \} \\
		max\{ min(0.0, 0.0), min(1.0, 0.8), min(0.0, 0.0), min(0.2, 0.3), min(0.2, 0.5) \}
	\end{array}\right] \\
=
	\left[\begin{array}{c}
		0.5 \\
		0.5 \\
		0.3 \\
		0.8
	\end{array}\right]
$$

Apple: 0.5
Orange: 0.5
Watermelon: 0.3
Banana: 0.8

$A = Banana$

## Case 4
$A = [0.0, 0.0, 0.0, 1.0]$
$B = ?$

$$
R \cdot S = 
	\left[\begin{array}{c c c c c}
		0.6, 0.5, 1.0, 0.0 \\
		0.0, 0.0, 0.0, 1.0 \\
		0.4, 1.0, 0.0, 0.0 \\
		0.4, 0.2, 1.0, 0.2 \\
		0.7, 1.0, 0.2, 0.2
	\end{array}\right]
	\cdot
	\left[\begin{array}{c}
		0.0 \\
		0.0 \\
		0.0 \\
		1.0
	\end{array}\right] \\
=
	\left[\begin{array}{c c c c c}
		max\{ min(0.6, 0.0), min(0.5, 0.0), min(1.0, 0.0), min(0.0, 1.0) \} \\
		max\{ min(0.0, 0.0), min(0.0, 0.0), min(0.0, 0.0), min(1.0, 1.0) \} \\
		max\{ min(0.4, 0.0), min(1.0, 0.0), min(0.0, 0.0), min(0.0, 1.0) \} \\
		max\{ min(0.4, 0.0), min(0.2, 0.0), min(1.0, 0.0), min(0.2, 1.0) \} \\
		max\{ min(0.7, 0.0), min(1.0, 0.0), min(0.2, 0.0), min(0.2, 1.0) \}
	\end{array}\right] \\
=
	\left[\begin{array}{c}
		0.0 \\
		1.0 \\
		0.0 \\
		0.2 \\
		0.2
	\end{array}\right]
$$

Circle: 0.0
Slender: 1.0
Flat: 0.0
Big: 0.2
Small: 0.2

$B = Slender$

## Case 5
$A = [0.0, 1.0, 0.0, 0.0]$
$B = ?$

$$
R \cdot S = 
	\left[\begin{array}{c c c c c}
		0.6, 0.5, 1.0, 0.0 \\
		0.0, 0.0, 0.0, 1.0 \\
		0.4, 1.0, 0.0, 0.0 \\
		0.4, 0.2, 1.0, 0.2 \\
		0.7, 1.0, 0.2, 0.2
	\end{array}\right]
	\cdot
	\left[\begin{array}{c}
		0.0 \\
		1.0 \\
		0.0 \\
		0.0
	\end{array}\right] \\
=
	\left[\begin{array}{c c c c c}
		max\{ min(0.6, 0.0), min(0.5, 1.0), min(1.0, 0.0), min(0.0, 0.0) \} \\
		max\{ min(0.0, 0.0), min(0.0, 1.0), min(0.0, 0.0), min(1.0, 0.0) \} \\
		max\{ min(0.4, 0.0), min(1.0, 1.0), min(0.0, 0.0), min(0.0, 0.0) \} \\
		max\{ min(0.4, 0.0), min(0.2, 1.0), min(1.0, 0.0), min(0.2, 0.0) \} \\
		max\{ min(0.7, 0.0), min(1.0, 1.0), min(0.2, 0.0), min(0.2, 0.0) \}
	\end{array}\right] \\
=
	\left[\begin{array}{c}
		0.5 \\
		0.0 \\
		1.0 \\
		0.2 \\
		1.0
	\end{array}\right]
$$

Circle: 0.5
Slender: 0.0
Flat: 1.0
Big: 0.2
Small: 1.0

$B = Flat, Small$
