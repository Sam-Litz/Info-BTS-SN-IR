<?php

Class Equipe {

    private $idEquipe;
    private $libelle;
    private $position;
    private $image;
   
    
    
    function __construct() {
        
    }

    function getIdEquipe() {
        return $this->idEquipe;
        
    }

    function getLibelle() {
        return $this->libelle;
    }

    function getPosition() {
        return $this->position;
    }

    function getImage() {
        return $this->image;
    }

    function setIdEquipe($idEquipe) {
        $this->idEquipe = $idEquipe;
    }

    function setLibelle($libelle) {
        $this->libelle = $libelle;
        
    }

    function setPosition($position) {
        $this->position = $position;
    }

    function setImage($image) {
        $this->image = $image;
    }
    
}   

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

