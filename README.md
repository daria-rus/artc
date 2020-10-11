# Instruction togit nub

##  Create local repo
* Cоздание локального репозитория в проектной папке.  
```git init```  
* Cоздание новой ветки readmeFileNotes и переключение в нее.  
```git checkout -b readmeFileNotes```   
* Добавление файла README.md  в локальный репозиторий в ветку readmeFileNotes.  
```git add README.md```  
* Сохранение текущего состояния добавленного файла в локальном репозитории.  
```git commit -m "add README file"```  

## Create remote repo and connect local
1. Create new repo on github
2. copy SSH  
```git remote add origin git@github.com:daria-rus/ArtC.git```  
```git pull```  
```git push -u origin readmeFileNotes```  

