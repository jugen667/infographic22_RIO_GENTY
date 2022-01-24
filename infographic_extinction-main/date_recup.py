import csv
dateList = []

with open("extinct_animals.csv") as csvfile:
	csv_reader = csv.DictReader(csvfile)
	for row in csv_reader :
		date = row['Decades']
		if date not in dateList:
			dateList.append(date)
		else :
			continue
		
dateList.sort()

textfile = open("dateRecup.txt", "w")
for decade in dateList:
	textfile.write(decade + "\n")
textfile.close()