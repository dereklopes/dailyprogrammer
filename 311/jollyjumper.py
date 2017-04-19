def main():
    print('enter numbers or q to quit')
    while(True):
        inputNumbers = input()
        if(inputNumbers == 'q'):
            return
        numItems = int(inputNumbers.split()[0]) - 1
        numbers = inputNumbers.split()[1:]
        isJolly = True;
        for i, number in enumerate(numbers[:(len(numbers) - 1)]):
            difference = abs(int(number) - int(numbers[i + 1]))
            if(difference != numItems):
                isJolly = False
            numItems -= 1
        if(isJolly):
            print('{} JOLLY'.format(inputNumbers))
        else:
            print('{} NOT JOLLY'.format(inputNumbers))

if __name__ == '__main__':
    main()
