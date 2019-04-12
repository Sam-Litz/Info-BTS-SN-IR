<?php
require("./Point.php");


$p1 = new Point();
$p1->modifier(2, 3);
print($p1);



$p2 = new Point();
$p2->modifier(5, 6);
print($p2);



$p3 = new Point();
$p3->modifier(5, 6);
$p3->zoomer(3);
print($p3);




$p4 = new Point();
$p4->dupliquer($p1);
print($p4);  
            