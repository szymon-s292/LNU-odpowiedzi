text = """I'm glad to say we've got the go-ahead to lend you the money you required. We will, of course,
need for security the deed to your house, the deed to your aunt's house, of your wife's parents' house, 
and of your granny's bungalow. And we will, in addition, need a controlling interest in the stock of 
your new company, unrestricted access to your private bank accounts, the deposit of your three children 
in our vaults as hostages, and a full legal indemnity in case of any embezzlement carried out against 
you by members of our staff during the normal course of their duties."""

t = "AEIOUYaeiouy"
s = {'A' : 0,'E' : 0,'I' : 0,'O' : 0,'U' : 0,'Y' : 0} 

for i in text:
    if i in t:
        s[i.upper()] += 1
        
        
print('A '+ str(s['A'])+'\nE '+ str(s['E'])+ '\nI '+str(s['I'])+ '\nO '+  str(s['O']) +'\nU ' + str(s['U']) +'\nY ' + str(s['Y']))
        
