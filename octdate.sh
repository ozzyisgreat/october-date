cur=$(date +%s)
past=$(echo "$cur - 1633060800" | bc)
day=$(echo $past / 86400 | bc)
echo "its october $day"
