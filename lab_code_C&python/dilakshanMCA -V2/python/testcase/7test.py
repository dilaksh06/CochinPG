def list_of_frequency(get_input):
    get_input=get_input.lower()
    thisdict=dict()
    lists=[]
    newdict={}
    text="abcdefghijklmnopqrstuvwxyz"
    for y in range (len(text)):
        count=0
        for z in range(len(get_input)):
            
            if(text[y]==get_input[z]):
                count=count+1
                thisdict.update({get_input[z]:count})
    for a in thisdict.values():
        lists.append(a)
    lists.sort(reverse=True)
    for d in (lists):
        for key,value in thisdict.items():
            if value== d:
                newdict[key]=value
        thisdict.pop(key)
    for e in newdict:
        print (e, newdict[e])
            
    
text_input=(input("enter a text: "))
list_of_frequency(text_input)

