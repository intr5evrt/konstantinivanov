echo Глобальная настйрока переменных, достаточно выполнить 1 раз
git config --global user.name intr5vert
git config --global user.email intr5vert@gmail.com 
echo Добавим трекинг всех новых файлов
git add -A
echo Коммит всех локальных изменений, не забываем в комментарии указывать суть внесенных изменений
git commit -a -m "04042019-7 "
echo Объединяем все изменения из удаленного репозитория с локальной версией
git pull origin master
echo Применение коммита, мерж локальных измнений в удаленный репозиторий
git push origin master
