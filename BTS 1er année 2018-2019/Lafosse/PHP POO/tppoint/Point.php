<?php

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * Description of Point
 *
 * @author lafosse
 */
class Point {

    private $x;
    private $y;
    private $isActif;
    
    function __construct() {
       // echo "DANS LE CONSTRUCTEUR";
    }

    
    function modifier($x, $y)
    {
        $this->x = $x;
        $this->y = $y;
    }

    
    function dupliquer(Point $point)
    {
            $this->x = $point->getX();
            $this->y = $point->getY();
    }

    
    function activer(bool $actif)
    {
              $this->isActif = $actif;
    }

    
    
    function zoomer ($zoom)
    { 
        $this->x=$this->x * $zoom;
        $this->y = $this->y * $zoom;
    }

    
    
    function __toString() {  
        return (string) "<br/>Mon point : X :".$this->x." Y: ".$this->y."<br/>";
    }

    
    
    
    
    
    function getX() {
        return $this->x;
    }

    function getY() {
        return $this->y;
    }

    function getIsActif() {
        return $this->isActif;
    }

    function setX($x) {
        $this->x = $x;
    }

    function setY($y) {
        $this->y = $y;
    }

    function setIsActif($isActif) {
        $this->isActif = $isActif;
    }


    
}
