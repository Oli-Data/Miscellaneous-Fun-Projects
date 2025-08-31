
def main(): 

    print("Welcome to Oli's Mood-Based Music Recommender")
    print("So, tell me what mood are you in or would like to be in?")
    print("Here are the options:")
    print("Happy 😊 \nSad 😔 \nChill 😌 \nAngry 😠 \nRomantic 💖")
    mood = input("Don't worry we judge here... like, just a litte: ")
    the_vibe = the_mood_list(mood)
    print(f"Here are your songs:")
    for song in the_vibe:
        print(f"• {song}")

def the_mood_list(mood):

    happy_list = ["Lisztomania – Phoenix",
                   "Electric Feel – Henry Green (dreamy cover)",
                   "10AM / Save the World – Travis Bretzer",
                   "Peach – Broadhurst",
                   "Japanese Denim – Daniel Caesar (chill-happy blend)"]
    
    sad_list = ["Alien Blues – Vundabar",
                "Agnes – Glass Animals",
                "No Shade in the Shadow of the Cross – Sufjan Stevens",
                "Like Real People Do – Hozier",
                "Bloodflood – alt-J"]
    
    chill_list = ["Night Owl – Galimatias",
                  "Get You The Moon – Kina ft. Snøw",
                  "Nara – alt-J",
                  "Warm Winds – SZA ft. Isaiah Rashad",
                  "Ylang Ylang – FKJ"]
    
    angry_list = ["Godspeed You! Black Emperor – Storm (Post-rock fury)",
                  "Dark Saturday – Metric",
                  "Sleepwalking – Bring Me The Horizon",
                  "You Think I Ain’t Worth a Dollar, But I Feel Like a Millionaire – Queens of the Stone Age",
                  "DOA – Jaymes Young"]
    
    romantic_list = ["Doomed – Moses Sumney",
                     "Poison & Wine – The Civil Wars",
                     "Love Theme – Ludovico Einaudi",
                     "Drown – Cuco",
                     "K. – Cigarettes After Sex"]
    
    if mood  == ["😊", "Happy","Happy 😊"]:
        selected_vibe = happy_list
    elif mood == ["😔", "Sad","Sad 😔"]:
        selected_vibe = sad_list
    elif mood == ["😌","Chill","Chill 😌"]:
        selected_vibe = chill_list
    elif mood == ["😠","Angry","Angry 😠"]:
        selected_vibe = angry_list
    else:
        selected_vibe = romantic_list

    return selected_vibe

if __name__ == "__main__":
    main()