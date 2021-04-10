# Purpose of this project

## The below article from RV was posted on 03-APR-2021

Good morning friends,

when trying to help a friend, i found that there is very little information
for the simultaneous use of several steps motor with drivers that use 2 wires (or 3) step and
direction (and enable).

I tried to make his sketch work, but due to delays, one engine affected the other.

I even managed to make the use of 2 engines run simultaneously, but it was not "pretty".

Each engine needed to run at a different speed than the other.

So I was thinking for a while, (sometimes I have this bad habit), and I tried a sketch
using Timer1.

As it worked, there I tried with 3 engines. and it still worked well, so I tried with
7 engines, each with a different speed and still worked very well.

I thought about turning the sketch into a library, but as programming it's not
my training beach, I don't think I can.

here is a copy of the sketch.

For up to 3 engines you can use arduino uno, mini, nano, but for more engines you will need
use the mega arduino.

If you test and find errors, please let me know and I'm also open to any
criticizes and or suggestions.

ruilviana

PS: The speed value is inverted, that is, the higher the set value, the lower the speed will be.

![Image of the logic analyzer with steps for each of the 7 motors](https://raw.githubusercontent.com/eijuito/IToIurStepMultiple/c3522bf4d2c3a737f65c52145cb95d551181c241/res/img/IToIurStepMultiple-LogicAnaliser.png)

(https://forum.arduino.cc/index.php?topic=735452.0)

# ITo Iur Step Multiple

Esta biblioteca permite ao Arduino controlar múltiplos motores de passo.

O código foi baseado no post do RV no Laboratório de Garagem, veja no seguinte link:
[Múltiplos Step Motors](https://labdegaragem.com/forum/topics/m-ltiplos-steps-motors "Múltiplos Steps Motors")

Muito obrigado ao Rui Viana que desenvolveu, testou e refinou esta biblioteca.

## Como usar esta biblioteca?

```cpp
// adicione esta biblioteca
#include "IToIurStepMultiple.h"

setup() {
}

loop() {
}
```
