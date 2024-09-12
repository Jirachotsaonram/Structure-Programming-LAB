ALGORITHM PROGRAM
VARIABLES : calories_per_subject = 113, calories_per_kg = 7700, month = 30, loseWeight = 3;calories, numSubject, perDay;
BEGIN

MODULE totalCalories(calories_per_kg, loseWeight,*calories)
    SET calories = calories_per_kg * loseWeight
    RETURN calories
END MODULE 

MODULE totalSubject(calories, calories_per_subject, *numSubject)
    SET numSubject = calories / calories_per_subject
    RETURN numSubject
END MODULE 

MODULE subjectPerDay(numSubject, month,* perDay)
    SET perDay = numSubject / month
    RETURN perDay
END MODULE 

MODULE Print(perDay)
PRINT perDay
END MODULE 

MAIN PROGRAM
 	CALL totalCalories(calories_per_kg, loseWeight, calories)
 CALL totalSubject(calories, calories_per_subject, numSubject)
 CALL subjectPerDay(numSubject, month, perDay)
		CALL Print (perDay)
	END MAIN PROGRAM
END PROGRAM









