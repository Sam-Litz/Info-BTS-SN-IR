<?php

Class EquipeModel {

    
    private $db;

    function __construct() {
        
    }

    
    function connexion() {
        try { //Connexion a la base de donnée
            $this->db = new PDO('mysql:host=localhost;dbname=cdm', 'root', '');
            //Configuration du pilote pour activer les exceptions
            //$this->db->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
        } catch (Exception $ex) {
            echo "Echec: " . $ex->getMessage();
        }
    }

    


 //lire dans ma table Equipe
    public function read() {
        $listeEquipes = array();
        $res = $this->db->query("SELECT * FROM equipe");
        while ($row = $res->fetch()) {
            $equipe = $this->wrapper($row);
            $listeEquipes[] = $equipe;
        }
        //print_r($listeEquipes);
        return $listeEquipes;
    }

    
    
    public function wrapper($row) {
        $equipe = new Equipe();
        $equipe->setIdEquipe($row['idEquipe']);
        $equipe->setLibelle($row['libelle']);
        $equipe->setPosition($row['position']);
        return $equipe;
    }

    
    
    public function create($equipe) {
        $stmt = $this->db->prepare("INSERT INTO equipe(libelle) VALUES (:libelle)");
        $stmt->bindParam(':libelle', $equipe->getLibelle());
        $stmt->execute();
    }
    
    
    

    public function update($equipe) {
        $stmt = $this->db->prepare("UPDATE equipe SET libelle =:libelle WHERE idEquipe=:idEquipe");
        $stmt->bindParam(':idEquipe', $equipe->getIdEquipe());
        $stmt->bindParam(':libelle', $equipe->getLibelle());
        $stmt->execute();
    }

    
       
    
    public function delete($idEquipe) {
        $stmt = $this->db->prepare("DELETE FROM equipe WHERE idEquipe=:idEquipe");
        $stmt->bindParam(':idEquipe', $idEquipe);
        $stmt->execute();
    }


    public function charger($idEquipe){
           $stmt=$this->db->prepare("SELECT * FROM equipe WHERE idEquipe=:idEquipe");
           $stmt->bindParam(':idEquipe', $idEquipe);
           $stmt->execute();
           //wrapper
           $equipe=$this->wrapper($stmt->fetch());
           return $equipe;
    }
}