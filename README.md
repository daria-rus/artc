# Instruction togit nub

##  Create local repo
'''git init'''  создание локального репозитория в проектной папке
'''git checkout -b readmeFileNotes''' создание новой ветки readmeFileNotes и переключение в нее
'''git add README.md'''  добавление файла README.md  в локальный репозиторий в ветку readmeFileNotes
'''git commit -m "add README file"''' сохранение текущего состояния добавленного файла в локальном репозитории

##Create remote repo and connect local
1. Create new repo on github
2. copy SSH 
'''git remote add origin git@github.com:daria-rus/ArtC.git''' 
git pull
git push -u origin readmeFileNotes

