# NBBS

NBBS (Number Based Battle Simulator) is a terminal based program where you can setup and simulate battles with user set variables. I hope to expand on this project in the future with more settings and a more dynamic interaction between the variables.

### Inputs
- **Game Speed**
**Range: [0, ~]**
The game speed multiplier is a value used to adjust the speed of battles. It can be used to make very large battles take less time or to obtain more accurate results in smaller battles by reducing the game speed. The default value is 1, and it must be set to a value above 0.
Please note that adjusting the game speed multiplier may impact the overall simulation experience and the accuracy of the results.
---
- **Amount**
**Range: [0, ~]**
Amount dictates how many soldiers an army has, this has an impact on their survivability, combat power and ability to last longer.
---
- **Morale**
**Range: [0, 100]**
Morale dictates how many soldiers an army is willing to lose before surrendering. It also functions as a multiplier for combat power and survivability.
---
- **Training**
**Range: [0, 100]**
Training increases the survivability and lethality of an army.
---
- **Equipment Quality**
**Range: [0, 100]**
Equipment quality is a multiplier on training increasing or decreasing lethality.