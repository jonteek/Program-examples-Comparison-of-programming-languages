lst = []
def isSorted(lst):
    for j in range(0,len(lst) - 1):
        if lst[j] > lst[j + 1]:
            return False
    return True


def bubbleSort(lst):
    while(isSorted(lst) == False): # funktionen isSorted kontrollerar om en lista är sorterad. Koden nedan upprepas till listan är sorterad
        for j in  range(0,len(lst) -1): # Upprepning av processen som kontrollerar om föregående värde är större än efterföljande
            temp = lst[j]
            if temp > lst[j + 1]:
                lst[j] = lst[j + 1]
                lst[j + 1] = temp
    return lst #Återger en sorterad lista


print(bubbleSort([5,2,7,3,8,2]))
