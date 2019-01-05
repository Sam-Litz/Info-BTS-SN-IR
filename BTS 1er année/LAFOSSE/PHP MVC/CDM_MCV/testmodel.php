<?php

require_once ("./class/Equipe.php");
require_once ("./model/EquipeModel.php");



$equipeModel = new EquipeModel();
$equipeModel->connexion();


//lecture
$listeEquipes= $equipeModel->read();
print_r($listeEquipes);



//creer
//$equipe = new Equipe();
//$equipeModel->create("Pologne",89);



//supprimer
//$equipeModel->delete(141);


//modifier
$equipeModel->update(143,"Roumanie", 15);















/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

