  # Question 2: Lion Exhibition

  As a lion trainer, you are taking part in an international lion exhibition. During the event, lions from different teams enter and exit the showroom where lion experts can inspect and score them.

  ## Introduction

  Before the show starts, you get access to the schedule for your lions - but not for the others. Nevertheless, during the show, you can observe all lions getting in and out of the room. Based on your experience, you believe that judges tend to award the biggest lions in the room with the highest scores.

  ## Problem Statement

  You need to complete the following functions:
  - `LionCompetition` class constructor
  - `lionEntered` and `lionLeft` functions
  - `getBiggestLions` function

  ## Function Definitions

  ### `LionCompetition` Class Constructor

  Parameters:
  - `lions`: A list of elements describing your lions, each with:
    - `name`: The name of the lion (string).
    - `height`: The height of the lion.
  - `schedule`: The private schedule of when your lions enter and leave the showroom, each with:
    - `name`: The name of the lion (string).
    - `enterTime`: The number of minutes since the start of the show when the lion will enter the room.
    - `exitTime`: The number of minutes since the start of the show when the lion will exit the room.

  ### `lionEntered` Function

  Parameters:
  - `currentTime`: The number of minutes since the start of the show.
  - `height`: The height of the lion that entered the room.

  ### `lionLeft` Function

  Parameters:
  - `currentTime`: The number of minutes since the start of the show.
  - `height`: The height of the lion that left the room.

  ## Constraints

  - Subsequent invocations of `lionLeft` and `lionEntered` functions are always called in order, according to the `currentTime` parameter.
  - The schedule is strictly followed.
  - The lion inspection (invocation of the `getBiggestLions` function) takes place either before or after all lions scheduled to enter or leave the room at a given minute.
  - Lion names are unique.
  - Times (`currentTime`, `enterTime`, and `exitTime`) are always whole numbers.

  ## Sample Input for Custom Testing

  ```plaintext
  definition marry 300
  definition rob 250
  schedule marry 10 15
  schedule rob 13 20
  start
  8 enter 200
  10 enter 310
  10 enter 300
  11 inspect
  13 enter 250
  13 exit 310
  13 inspect
  15 exit 300
  16 inspect
  16 exit 200
  20 exit 250
  21 end
  ```plaintext

  Sample Output
  2 marry rob
  1 rob

  Explanation
  We have two lions:
  • marry with a height of 300cm that enters the show 10 minutes after its start and exits it 15 minutes after its start.
  • rob with a height of 250cm that enters the show 13 minutes after its start and exits it 20 minutes after its start.
  The show goes as follows:
  • 8 minutes after the start of the show a lion with a height of 200cm enters the room - based on the schedule it is not one of ours.
  • 10 minutes after the start of the show two lions enter the room: a 310cm one and a 300cm one. The second one is marry.
  • We do an inspection, but unfortunately marry is not the biggest lion in the room, so we return an empty list.
  • 13 minutes after the start of the show rob enters the room and the unknown 310cm
  lion exits it.
  • We do an inspection. Both marry and rob are higher than the 200cm height lion that entered the room at the 8th minute of the show, so we return both names.
  • 15 minutes after the start of the show marry leaves the room.
  • We do an inspection. rob is still the biggest lion in the room.
  • 16 and 20 minutes after the start of the show both remaining lions exit the room.