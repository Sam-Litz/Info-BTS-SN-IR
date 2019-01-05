<?php

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * Description of Personne
 *
 * @author Sam Litz
 */
class Personne {
    private $nom;
    private $prenom;
    private $age;
    private $profession;
    
    // seulement féminim et masculin (bouton radio unique)
    private $sexe;
    
    private $passion;
    
    private $nationalite;
    
    
    
//    function __construct($nom, $prenom, $age, $profession, $sexe, $passion, $nationalite)
//    {
//        $this->nom = $nom;
//        $this->prenom = $prenom;
//        $this->age = $age;
//        $this->profession = $profession;
//        $this->sexe = $sexe;
//        $this->passion = $passion;
//        $this->nationalite = $nationalite;
//    }

    
    
    function getNom()
    {
        return $this->nom;
    }

    function getPrenom()
    {
        return $this->prenom;
    }

    function getAge()
    {
        return $this->age;
    }

    function getProfession()
    {
        return $this->profession;
    }

    function getSexe()
    {
        return $this->sexe;
    }

    function getPassion()
    {
        return $this->passion;
    }

    function getNationalite()
    {
        return $this->nationalite;
    }

    function setNom($nom)
    {
        $this->nom = $nom;
    }

    function setPrenom($prenom)
    {
        $this->prenom = $prenom;
    }

    function setAge($age)
    {
        $this->age = $age;
    }

    function setProfession($profession)
    {
        $this->profession = $profession;
    }

    function setSexe($sexe)
    {
        $this->sexe = $sexe;
    }

    function setPassion($passion)
    {
        $this->passion = $passion;
    }

    function setNationalite($nationalite)
    {
        $this->nationalite = $nationalite;
    }


    
    
}
