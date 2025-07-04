# 🌳 Projet : Arbre de Décision en C++

Ce projet propose une **implémentation basique d’un arbre de décision binaire en C++**, structuré autour de deux classes principales : **Bot** et **BinaryTree**. Il est conçu pour servir de **base évolutive** à un système de décision automatisé.

---

## ✅ ✨ Objectifs
- Modéliser un **arbre de décision binaire** en C++.
- Permettre la **création et la libération** de l’arbre grâce à des méthodes simples.
- Fournir une architecture propre et extensible.

---

## 📦 Contenu

### 1️⃣ Classe **Bot**
> *Modélisation des questions et des nœuds pour l'arbre de décision.*
- Représente les **questions ou critères de division** dans l’arbre.
- Peut contenir :
  - La question ou le test (ex. : *« âge > 18 ? »*).
  - Des valeurs ou labels associés à la décision.
- Sert de **contenu** pour chaque nœud du BinaryTree.

---

### 2️⃣ Classe **BinaryTree**
> *Base structurelle de l’arbre de décision.*
- Modélise un **nœud binaire** avec :
  - Pointeur vers l’enfant gauche
  - Pointeur vers l’enfant droit
  - Pointeur vers le parent (optionnel)
  - Contenu de type **Bot**
- Sert de **structure de base** pour l’arbre de décision binaire.

---

## 🔨 Méthodes principales implémentées

### ✔️ `Insert`
- Permet de **créer un nouvel arbre** en combinant deux sous-arbres et un contenu (Bot) pour la racine.
- Usage :
  - Fournir deux sous-arbres (enfants gauche et droit).
  - Fournir le contenu (objet **Bot**) pour la racine.
- Retourne un **nouvel arbre composé**.

---

### ✔️ `Delete`
- Permet de **libérer la mémoire** occupée par l’arbre.
- Parcours récursif pour **supprimer proprement** chaque nœud.
- Évite les **fuites mémoire** en désallouant tous les sous-arbres.

---

## 💻 Exemple d’utilisation (conceptuel)
```cpp
