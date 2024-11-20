# Lab 5
## Activity 0
## Table of Results of the osciloscope jitter and drift for each files
## Wet set DELAY_MS =500, meanming the desired period is 1 sec and desired frequency is 1 Hz 

| Files           | Frequency       | Period        | Jitter (stdev) | Drift    |
|-----------------|-----------------|---------------|----------------|----------|
| sleep.c         | 999.9 mHz       | 950 ms        | 8.6436 ms      | 1.9728 s |
| timer.c         | 999.9 mHz       | 0.95 Hz       | 38.496 ms      | 0.1008 s |
| task_delay.c    | 1.28 Hz         | 450 ms        | 26.493 ms      | 10.53  s |

## Table of Results of the osciloscope jitter and drift introducing a busy wait loop after the GPIO is toggled 

| Files           | Frequency       | Period        | Jitter (stdev) | Drift    |
|-----------------|-----------------|---------------|----------------|----------|
| sleep.c         | 999.9 mHz       | 950 ms        | 5.04   us      | 1.9728 s |
| timer.c         | 999.9 mHz       | 0.95 Hz       | 9.874  ms      | 3.276  s |
| task_delay.c    | 1.28 Hz         | 450 ms        | 261.54 us      | 1.324  s |

## Measure the jitter of the Agilent function generator operating at the same frequency for comparison

| Frequency       | Period        | Jitter (stdev) |
|-----------------|---------------|----------------|
| 999.97 mHz      | 1.000026 s    | 15.3  ns       |

## Activity 1

