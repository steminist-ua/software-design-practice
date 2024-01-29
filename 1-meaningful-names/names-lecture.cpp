int d; // Минулий час

int elapsedTimeInDays;
int daysSinceCreation;
int daysSinceModification;
int fileAgeInDays;


public List<int[]> getThem()
{
    List<int[]> list1 = new ArrayList<int[]>();
    for (int[] x : theList)
        if (x[0] == 4)
            list1.add(x);
    return list1;
}


public List<int[]> getFlaggedCells()
{
    List<int[]> flaggedCells = new ArrayList<int[]>();
    for (int[] cell : gameBoard)
        if (cell[STATUS_VALUE] == FLAGGED)
            flaggedCells.add(cell);
    return flaggedCells;
}


public List<Cell> getFlaggedCells()
{
    List<Cell> flaggedCells = new ArrayList<Cell>();
    for (Cell cell : gameBoard)
        if (cell.isFlagged())
        flaggedCells.add(cell);
    return flaggedCells;
}


int a = l;
if ( O == l )
    a = O1;
else
    l = 01;


public static void copyChars(char a1[], char a2[])
{
    for (int i = 0; i < a1.length; i++)
    {
        a2[i] = a1[i];
    }
}


public static void copyChars(char source[], char destination[])
{
    for (int i = 0; i < source.length; i++)
    {
        destination[i] = source[i];
    }
}


getActiveAccount();
getActiveAccounts();
getActiveAccountInfo();


class DtaRcrd102
{
    private Date genymdhms;
    private Date modymdhms;
    private final String pszqint = "102";
    /* ... */
};


class Customer
{
    private Date generationTimestamp;
    private Date modificationTimestamp;;
    private final String recordId = "102";
    /* ... */
};


for (int j=0; j<34; j++)
{
    s += (t[j]*4)/5;
}


int realDaysPerIdealWeek = 4;
const int WORK_DAYS_PER_WEEK = 5;
int sum = 0;
for (int j=0; j < NUMBER_OF_TASKS; j++)
{
    int realTaskDays = taskEstimate[j] * realDaysPerIdealWeek;
    int realTaskWeeks = (realTaskDays / WORK_DAYS_PER_WEEK);
    sum += realTaskWeeks;
}


string name = employee.getName();
customer.setName("mike");
if (paycheck.isPosted())...




private void printGuessStatistics(char candidate, int count) 
{
    String number;
    String verb;
    String pluralModifier;
    if (count == 0) 
    {
        number = "no";
        verb = "are";
        pluralModifier = "s";
    } 
    else if (count == 1)
    {
        number = "1";
        verb = "is";
        pluralModifier = "";
    } 
    else 
    {
        number = Integer.toString(count);
        verb = "are";
        pluralModifier = "s";
    }
    String guessMessage = String.format("There %s %s %s%s", verb, number, candidate, pluralModifier);
    print(guessMessage);
}



public class GuessStatisticsMessage
{
    private String number;
    private String verb;
    private String pluralModifier;

    public String make(char candidate, int count) 
    {
        createPluralDependentMessageParts(count);
        return String.format("There %s %s %s%s", verb, number, candidate, pluralModifier );
    }
    
    private void createPluralDependentMessageParts(int count)
    {
         if (count == 0)
         {
             thereAreNoLetters();
         } 
         else if (count == 1) 
         {
             thereIsOneLetter();
         } 
         else 
         {
             thereAreManyLetters(count);
         }
    }
    
    private void thereAreManyLetters(int count)
    {
        number = Integer.toString(count);
        verb = "are";
        pluralModifier = "s";
    }
    
    private void thereIsOneLetter()
    {
        number = "1";
        verb = "is";
        pluralModifier = "";
    }
    
    private void thereAreNoLetters()
    {
        number = "no";
        verb = "are";
        pluralModifier = "s";
    }
}