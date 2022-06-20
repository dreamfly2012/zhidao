<?php

$s = 0;

define("PI",3.1415926);


$s = PI*$argv[1]*$argv[1] +  PI*$argv[2]*$argv[2] + PI*$argv[3]*$argv[3] + PI*$argv[4]*$argv[4] + PI*$argv[5]*$argv[5];

echo "圆的面积是:" . $s; 
