
#include<iostream>
#include"choice.hpp"
using namespace std;
void quize(int s)
{
    char g;
    int score = 0, i, j;
    switch (s)
    {
    case 1:
    {
        // Questions
        char question[5][100] =
        {
            "1. What is the chemical symbol for hydrogen? ",
            "2. In which state of matter is hydrogen most commonly found on Earth?",
            "3. What is the lightest element in the periodic table?",
            "4. What is the most abundant isotope of hydrogen?",
            "5. What process powers the Sun, where hydrogen nuclei fuse together to form helium?"
        };

        // Options
        char options[20][30] =
        {
            "a. H", "b. He", "c. Hy", "d. Ho",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. Hydrogen", "b. Helium", "c. Lithium", "d. Oxygen",
            "a. Hydrogen-1", "b. Hydrogen-2", "c. Hydrogen-3", "d. Hydrogen-4",
            "a. Fusion", "b. Fission", "c. Combustion", "d. Ionization"
        };

        // Answers
        char ans[5] = {'a', 'c', 'a', 'a', 'a'};

        // Questions loop
        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }

            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << endl
                     << "correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 2:
    {
        // Questions
        char question[5][100] =
        {
            "1. What is the chemical symbol for helium?",
            "2. In which state of matter is helium most commonly found?",
            "3. What is the second lightest element in the periodic table?",
            "4. Which isotope of helium is the most common on Earth?",
            "5. What type of gas is helium?"
        };

        // Options
        char options[20][30] =
        {
            "a. H", "b. He", "c. Hy", "d. Ho",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. Hydrogen", "b. Helium", "c. Lithium", "d. Oxygen",
            "a. Helium-3", "b. Helium-4", "c. Helium-5", "d. Helium-6",
            "a. Noble gas", "b. Halogen", "c. Alkali metal", "d. Transition metal"
        };

        // Answers
        char ans[5] = {'b', 'c', 'b', 'b', 'a'};

        // Questions loop
        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ",correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << endl;
        cout << "--------Total Score------- : " << score << endl;
        break;
    }
    case 3:
    {
        // Questions for Lithium
        char question[5][100] =
        {
            "1. What is the chemical symbol for lithium?",
            "2. What is the atomic number of lithium?",
            "3. What is the melting point of lithium?",
            "4. Which group does lithium belong to in the periodic table?",
            "5. What is the valency of lithium?"
        };

        // Options for Lithium
        char options[20][30] =
        {
            "a. Li", "b. L", "c. Lh", "d. La",
            "a. 1", "b. 2", "c. 3", "d. 4",
            "a. 180.54�C", "b. 654.8�C", "c. 180.54�F", "d. 356.4�C",
            "a. Alkali metal", "b. Alkaline earth metal", "c. Halogen", "d. Noble gas",
            "a. 1", "b. 2", "c. 3", "d. 4"
        };

        // Answers for Lithium
        char ans[5] = {'a', 'a', 'c', 'a', 'a'};

        // Questions loop for Lithium
        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }

            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << endl
                     << "correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << endl;
        cout << "----------------" << endl;
        cout << "Score is" << score << endl;
        cout << "----------------" << endl;
        break;
    }
    case 4:
    {
        // Questions for Beryllium
        char question[5][100] =
        {
            "1. What is the chemical symbol for beryllium?",
            "2. What is the atomic number of beryllium?",
            "3. What is the melting point of beryllium?",
            "4. Which group does beryllium belong to in the periodic table?",
            "5. What is the valency of beryllium?"
        };

        // Options for Beryllium
        char options[20][30] =
        {
            "a. Be", "b. B", "c. By", "d. Ba",
            "a. 3", "b. 4", "c. 5", "d. 6",
            "a. 1278�C", "b. 600�C", "c. 1287�C", "d. 1500�C",
            "a. Alkaline earth metal", "b. Transition metal", "c. Halogen", "d. Noble gas",
            "a. 1", "b. 2", "c. 3", "d. 4"
        };

        // Answers for Beryllium
        char ans[5] = {'a', 'b', 'c', 'a', 'b'};

        // Questions loop for Beryllium
        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ",correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << endl;
        cout << "----------------" << endl;
        cout << "Score is" << score << endl;
        cout << "----------------" << endl;
        break;
    }
    case 5:
    {
        // Questions for Boron
        char question[5][100] =
        {
            "1. What is the chemical symbol for boron?",
            "2. What is the atomic number of boron?",
            "3. What is the melting point of boron?",
            "4. Which group does boron belong to in the periodic table?",
            "5. What is the valency of boron?"
        };

        // Options for Boron
        char options[20][30] =
        {
            "a. B", "b. Bo", "c. Br", "d. Be",
            "a. 5", "b. 6", "c. 7", "d. 8",
            "a. 2079�C", "b. 2349�C", "c. 2500�C", "d. 1535�C",
            "a. Alkali metal", "b. Alkaline earth metal", "c. Halogen", "d. Metalloid",
            "a. 1", "b. 2", "c. 3", "d. 4"
        };

        // Answers for Boron
        char ans[5] = {'a', 'a', 'c', 'd', 'b'};

        // Questions loop for Boron
        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ",correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << endl;
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 6:
    {
        // Questions for Carbon
        char question[5][100] =
        {
            "1. What is the chemical symbol for carbon?",
            "2. In which state of matter is carbon most commonly found on Earth?",
            "3. What is the lightest element in the periodic table?",
            "4. What is the most common isotope of carbon?",
            "5. What process is essential for life, where carbon compounds are used as building blocks?"
        };

        // Options for Carbon
        char options[20][30] =
        {
            "a. C", "b. Ca", "c. Cr", "d. Co",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. Hydrogen", "b. Helium", "c. Carbon", "d. Oxygen",
            "a. Carbon-12", "b. Carbon-13", "c. Carbon-14", "d. Carbon-15",
            "a. Photosynthesis", "b. Respiration", "c. Combustion", "d. Fusion"
        };

        // Answers for Carbon
        char ans[5] = {'a', 'a', 'c', 'a', 'a'};

        // Questions loop for Carbon
        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ",correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 7:
    {
        // Questions for Nitrogen
        char question[5][100] =
        {
            "1. What is the chemical symbol for nitrogen?",
            "2. In which state of matter is nitrogen most commonly found on Earth?",
            "3. What is the lightest element in the periodic table?",
            "4. Which isotope of nitrogen is most common in nature?",
            "5. What is the primary function of nitrogen in living organisms?"
        };

        // Options for Nitrogen
        char options[20][50] =
        {
            "a. N", "b. Ni", "c. Ne", "d. Na",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. Hydrogen", "b. Helium", "c. Nitrogen", "d. Oxygen",
            "a. Nitrogen-14", "b. Nitrogen-15", "c. Nitrogen-16", "d. Nitrogen-17",
            "a. Component of DNA", "b. Producing energy", "c. Supporting combustion", "d. Regulating body temperature"
        };

        // Answers for Nitrogen
        char ans[5] = {'a', 'c', 'a', 'a', 'a'};

        // Questions loop for Nitrogen
        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ",correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 8:
    {
        // Questions for Oxygen
        char question[5][100] =
        {
            "1. What is the chemical symbol for oxygen?",
            "2. In which state of matter is oxygen most commonly found on Earth?",
            "3. What is the lightest element in the periodic table?",
            "4. Which isotope of oxygen is most abundant on Earth?",
            "5. What is the primary role of oxygen in cellular respiration?"
        };

        // Options for Oxygen
        char options[20][50] =
        {
            "a. O", "b. Ox", "c. Oz", "d. Ol",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. Hydrogen", "b. Helium", "c. Oxygen", "d. Nitrogen",
            "a. Oxygen-16", "b. Oxygen-17", "c. Oxygen-18", "d. Oxygen-19",
            "a. Producing energy", "b. Absorbing carbon dioxide", "c. Facilitating digestion", "d.oxygen exchange in cells"
        };

        // Answers for Oxygen
        char ans[5] = {'a', 'c', 'a', 'a', 'd'};

        // Questions loop for Oxygen
        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ",correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 9:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for fluorine?",
            "2. In which state of matter is fluorine most commonly found at room temperature?",
            "3. What is the atomic number of fluorine?",
            "4. Which isotope of fluorine is most stable?",
            "5. What is the primary use of fluorine?"
        };

        char options[20][50] =
        {
            "a. Fl", "b. Fu", "c. Fr", "d. Fh",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 8", "b. 9", "c. 10", "d. 11",
            "a. Fluorine-16", "b. Fluorine-17", "c. Fluorine-18", "d. Fluorine-19",
            "a. In refrigerants", "b. In toothpaste", "c. In nuclear reactors", "d. In rocket fuel"
        };

        char ans[5] = {'a', 'c', 'b', 'b', 'b'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 10:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for neon?",
            "2. In which state of matter is neon most commonly found at room temperature?",
            "3. What is the atomic number of neon?",
            "4. Which noble gas is immediately before neon in the periodic table?",
            "5. What is the primary use of neon?"
        };

        char options[20][50] =
        {
            "a. Ne", "b. No", "c. Nn", "d. Na",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 8", "b. 9", "c. 10", "d. 11",
            "a. Helium", "b. Argon", "c. Krypton", "d. Xenon",
            "a. In advertising signs", "b. In refrigeration", "c. In medical imaging", "d. In nuclear reactors"
        };

        char ans[5] = {'a', 'c', 'c', 'a', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 11:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for sodium?",
            "2. In which state of matter is sodium most commonly found at room temperature?",
            "3. What is the atomic number of sodium?",
            "4. Which alkali metal is immediately before sodium in the periodic table?",
            "5. What is the primary use of sodium metal?"
        };

        char options[20][50] =
        {
            "a. So", "b. Sn", "c. Sa", "d. Si",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 9", "b. 10", "c. 11", "d. 12",
            "a. Lithium", "b. Potassium", "c. Rubidium", "d. Calcium",
            "a. In table salt", "b. In batteries", "c. In fireworks", "d. In light bulbs"
        };

        char ans[5] = {'a', 'a', 'c', 'a', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 12:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for magnesium?",
            "2. In which state of matter is magnesium most commonly found at room temperature?",
            "3. What is the atomic number of magnesium?",
            "4. Which alkaline earth metal is immediately before magnesium in the periodic table?",
            "5. What is the primary use of magnesium metal?"
        };

        char options[20][50] =
        {
            "a. Mg", "b. Mn", "c. Mh", "d. Mu",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 11", "b. 12", "c. 13", "d. 14",
            "a. Beryllium", "b. Calcium", "c. Strontium", "d. Barium",
            "a. In alloys", "b. In antacids", "c. In fertilizers", "d. In fireworks"
        };

        char ans[5] = {'a', 'a', 'b', 'a', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 13:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for aluminium?",
            "2. In which state of matter is aluminium most commonly found at room temperature?",
            "3. What is the atomic number of aluminium?",
            "4. Which metal is immediately before aluminium in the periodic table?",
            "5. What is the primary use of aluminium metal?"
        };

        char options[20][50] =
        {
            "a. Al", "b. Am", "c. Ai", "d. Au",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 12", "b. 13", "c. 14", "d. 15",
            "a. Magnesium", "b. Silicon", "c. Phosphorus", "d. Sulfur",
            "a. In construction", "b. In batteries", "c. In fertilizers", "d. In pharmaceuticals"
        };

        char ans[5] = {'a', 'a', 'b', 'b', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 14:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for silicon?",
            "2. In which state of matter is silicon most commonly found at room temperature?",
            "3. What is the atomic number of silicon?",
            "4. Which nonmetal is immediately before silicon in the periodic table?",
            "5. What is the primary use of silicon?"
        };

        char options[20][50] =
        {
            "a. Si", "b. So", "c. Sn", "d. Se",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 13", "b. 14", "c. 15", "d. 16",
            "a. Oxygen", "b. Carbon", "c. Nitrogen", "d. Phosphorus",
            "a. In semiconductors", "b. In batteries", "c. In fertilizers", "d. In pharmaceuticals"
        };

        char ans[5] = {'a', 'a', 'b', 'd', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 15:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for phosphorus?",
            "2. In which state of matter is phosphorus most commonly found at room temperature?",
            "3. What is the atomic number of phosphorus?",
            "4. Which nonmetal is immediately before phosphorus in the periodic table?",
            "5. What is the primary use of phosphorus?"
        };

        char options[20][50] =
        {
            "a. Ph", "b. Ps", "c. Pr", "d. Pn",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 14", "b. 15", "c. 16", "d. 17",
            "a. Nitrogen", "b. Oxygen", "c. Sulfur", "d. Chlorine",
            "a. In fertilizers", "b. In batteries", "c. In semiconductors", "d. In pharmaceuticals"
        };

        char ans[5] = {'a', 'a', 'b', 'a', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 16:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for sulfur?",
            "2. In which state of matter is sulfur most commonly found at room temperature?",
            "3. What is the atomic number of sulfur?",
            "4. Which nonmetal is immediately before sulfur in the periodic table?",
            "5. What is the primary use of sulfur?"
        };

        char options[20][50] =
        {
            "a. Su", "b. Sl", "c. Sr", "d. Sf",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 15", "b. 16", "c. 17", "d. 18",
            "a. Oxygen", "b. Phosphorus", "c. Chlorine", "d. Selenium",
            "a. In fertilizers", "b. In batteries", "c. In semiconductors", "d. In pharmaceuticals"
        };

        char ans[5] = {'d', 'c', 'b', 'a', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 17:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for chlorine?",
            "2. In which state of matter is chlorine most commonly found at room temperature?",
            "3. What is the atomic number of chlorine?",
            "4. Which halogen is immediately before chlorine in the periodic table?",
            "5. What is the primary use of chlorine?"
        };

        char options[20][50] =
        {
            "a. Cl", "b. Cn", "c. Ch", "d. Ce",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 16", "b. 17", "c. 18", "d. 19",
            "a. Fluorine", "b. Bromine", "c. Iodine", "d. Astatine",
            "a. In water purification", "b. In batteries", "c. In fertilizers", "d. In pharmaceuticals"
        };

        char ans[5] = {'a', 'c', 'b', 'a', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 18:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for argon?",
            "2. In which state of matter is argon most commonly found at room temperature?",
            "3. What is the atomic number of argon?",
            "4. Which noble gas is immediately before argon in the periodic table?",
            "5. What is the primary use of argon?"
        };

        char options[20][50] =
        {
            "a. Ag", "b. Ar", "c. Ao", "d. An",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 17", "b. 18", "c. 19", "d. 20",
            "a. Helium", "b. Neon", "c. Krypton", "d. Xenon",
            "a. In welding", "b. In batteries", "c. In fertilizers", "d. In pharmaceuticals"
        };

        char ans[5] = {'b', 'c', 'b', 'b', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 19:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for potassium?",
            "2. In which state of matter is potassium most commonly found at room temperature?",
            "3. What is the atomic number of potassium?",
            "4. Which alkali metal is immediately before potassium in the periodic table?",
            "5. What is the primary use of potassium?"
        };

        char options[20][50] =
        {
            "a. Po", "b. Pn", "c. Pl", "d. K",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 18", "b. 19", "c. 20", "d. 21",
            "a. Sodium", "b. Lithium", "c. Rubidium", "d. Cesium",
            "a. In fertilizers", "b. In batteries", "c. In semiconductors", "d. In pharmaceuticals"
        };

        char ans[5] = {'d', 'a', 'b', 'a', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 20:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for calcium?",
            "2. In which state of matter is calcium most commonly found at room temperature?",
            "3. What is the atomic number of calcium?",
            "4. Which alkaline earth metal is immediately before calcium in the periodic table?",
            "5. What is the primary use of calcium?"
        };

        char options[20][50] =
        {
            "a. Ca", "b. Ce", "c. Cl", "d. Cn",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 19", "b. 20", "c. 21", "d. 22",
            "a. Magnesium", "b. Beryllium", "c. Strontium", "d. Barium",
            "a. In bones and teeth", "b. In batteries", "c. In fertilizers", "d. In semiconductors"
        };

        char ans[5] = {'a', 'a', 'b', 'a', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 21:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for scandium?",
            "2. In which state of matter is scandium most commonly found at room temperature?",
            "3. What is the atomic number of scandium?",
            "4. Which transition metal is immediately before scandium in the periodic table?",
            "5. What is the primary use of scandium?"
        };

        char options[20][50] =
        {
            "a. Sc", "b. Sn", "c. Sm", "d. Si",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 20", "b. 21", "c. 22", "d. 23",
            "a. Titanium", "b. Vanadium", "c. Chromium", "d. Manganese",
            "a. In aerospace industry", "b. In batteries", "c. In fertilizers", "d. In semiconductors"
        };

        char ans[5] = {'a', 'a', 'b', 'b', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 22:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for titanium?",
            "2. In which state of matter is titanium most commonly found at room temperature?",
            "3. What is the atomic number of titanium?",
            "4. Which transition metal is immediately before titanium in the periodic table?",
            "5. What is the primary use of titanium?"
        };

        char options[20][50] =
        {
            "a. Ti", "b. Tn", "c. Tm", "d. Tt",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 21", "b. 22", "c. 23", "d. 24",
            "a. Scandium", "b. Vanadium", "c. Chromium", "d. Manganese",
            "a. In aerospace industry", "b. In batteries", "c. In fertilizers", "d. In semiconductors"
        };

        char ans[5] = {'a', 'a', 'b', 'a', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 23:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for vanadium?",
            "2. In which state of matter is vanadium most commonly found at room temperature?",
            "3. What is the atomic number of vanadium?",
            "4. Which transition metal is immediately before vanadium in the periodic table?",
            "5. What is the primary use of vanadium?"
        };

        char options[20][50] =
        {
            "a. Vn", "b. Vd", "c. Vm", "d. V",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 22", "b. 23", "c. 24", "d. 25",
            "a. Titanium", "b. Chromium", "c. Manganese", "d. Iron",
            "a. In steel production", "b. In batteries", "c. In fertilizers", "d. In semiconductors"
        };

        char ans[5] = {'d', 'a', 'b', 'a', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 24:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for chromium?",
            "2. In which state of matter is chromium most commonly found at room temperature?",
            "3. What is the atomic number of chromium?",
            "4. Which transition metal is immediately before chromium in the periodic table?",
            "5. What is the primary use of chromium?"
        };

        char options[20][50] =
        {
            "a. Ch", "b. Cr", "c. Cm", "d. Cn",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 23", "b. 24", "c. 25", "d. 26",
            "a. Vanadium", "b. Manganese", "c. Iron", "d. Cobalt",
            "a. In stainless steel production", "b. In batteries", "c. In fertilizers", "d. In semiconductors"
        };

        char ans[5] = {'b', 'a', 'b', 'a', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 25:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for manganese?",
            "2. In which state of matter is manganese most commonly found at room temperature?",
            "3. What is the atomic number of manganese?",
            "4. Which transition metal is immediately before manganese in the periodic table?",
            "5. What is the primary use of manganese?"
        };

        char options[20][50] =
        {
            "a. Mn", "b. Mg", "c. Ma", "d. Me",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 24", "b. 25", "c. 26", "d. 27",
            "a. Chromium", "b. Iron", "c. Cobalt", "d. Nickel",
            "a. In steel production", "b. In batteries", "c. In fertilizers", "d. In semiconductors"
        };

        char ans[5] = {'a', 'a', 'b', 'a', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 26:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for iron?",
            "2. In which state of matter is iron most commonly found at room temperature?",
            "3. What is the atomic number of iron?",
            "4. Which transition metal is immediately before iron in the periodic table?",
            "5. What is the primary use of iron?"
        };

        char options[20][50] =
        {
            "a. Ir", "b. Io", "c. In", "d. Fe",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 25", "b. 26", "c. 27", "d. 28",
            "a. Cobalt", "b. Nickel", "c. Manganese", "d. Chromium",
            "a. In construction and manufacturing", "b. In batteries", "c. In fertilizers", "d. In semiconductors"
        };

        char ans[5] = {'d', 'a', 'b', 'c', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 27:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for cobalt?",
            "2. In which state of matter is cobalt most commonly found at room temperature?",
            "3. What is the atomic number of cobalt?",
            "4. Which transition metal is immediately before cobalt in the periodic table?",
            "5. What is the primary use of cobalt?"
        };

        char options[20][50] =
        {
            "a. Cb", "b. Co", "c. Ct", "d. Ce",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 26", "b. 27", "c. 28", "d. 29",
            "a. Nickel", "b. Iron", "c. Manganese", "d. Chromium",
            "a. In batteries and alloys", "b. In construction", "c. In fertilizers", "d. In semiconductors"
        };

        char ans[5] = {'b', 'a', 'b', 'a', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 28:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for nickel?",
            "2. In which state of matter is nickel most commonly found at room temperature?",
            "3. What is the atomic number of nickel?",
            "4. Which transition metal is immediately before nickel in the periodic table?",
            "5. What is the primary use of nickel?"
        };

        char options[20][50] =
        {
            "a. Ni", "b. Ne", "c. Na", "d. No",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 27", "b. 28", "c. 29", "d. 30",
            "a. Cobalt", "b. Iron", "c. Copper", "d. Zinc",
            "a. In stainless steel production", "b. In batteries", "c. In fertilizers", "d. In semiconductors"
        };

        char ans[5] = {'a', 'a', 'b', 'a', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 29:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for copper?",
            "2. In which state of matter is copper most commonly found at room temperature?",
            "3. What is the atomic number of copper?",
            "4. Which transition metal is immediately before copper in the periodic table?",
            "5. What is the primary use of copper?"
        };

        char options[20][50] =
        {
            "a. Cu", "b. Co", "c. Cp", "d. Cr",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 28", "b. 29", "c. 30", "d. 31",
            "a. Zinc", "b. Nickel", "c. Cobalt", "d. Iron",
            "a. In electrical wiring", "b. In batteries", "c. In fertilizers", "d. In semiconductors"
        };

        char ans[5] = {'a', 'a', 'b', 'd', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 30:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for zinc?",
            "2. In which state of matter is zinc most commonly found at room temperature?",
            "3. What is the atomic number of zinc?",
            "4. Which transition metal is immediately before zinc in the periodic table?",
            "5. What is the primary use of zinc?"
        };

        char options[20][50] =
        {
            "a. Zn", "b. Zi", "c. Zp", "d. Ze",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 29", "b. 30", "c. 31", "d. 32",
            "a. Iron", "b. Copper", "c. Nickel", "d. Cobalt",
            "a. In galvanization", "b. In batteries", "c. In fertilizers", "d. In semiconductors"
        };

        char ans[5] = {'a', 'a', 'b', 'b', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 31:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for germanium?",
            "2. In which state of matter is germanium most commonly found at room temperature?",
            "3. What is the atomic number of germanium?",
            "4. Which metalloid is immediately before germanium in the periodic table?",
            "5. What is the primary use of germanium?"
        };

        char options[20][50] =
        {
            "a. Ge", "b. Gr", "c. Gn", "d. Ga",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 30", "b. 31", "c. 32", "d. 33",
            "a. Silicon", "b. Arsenic", "c. Antimony", "d. Tellurium",
            "a. In semiconductor electronics", "b. In batteries", "c. In fertilizers", "d. In construction"
        };

        char ans[5] = {'a', 'a', 'b', 'a', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 32:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for arsenic?",
            "2. In which state of matter is arsenic most commonly found at room temperature?",
            "3. What is the atomic number of arsenic?",
            "4. Which metalloid is immediately before arsenic in the periodic table?",
            "5. What is the primary use of arsenic?"
        };

        char options[20][50] =
        {
            "a. At", "b. As", "c. Ar", "d. An",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 31", "b. 32", "c. 33", "d. 34",
            "a. Phosphorus", "b. Germanium", "c. Antimony", "d. Selenium",
            "a. In pesticides", "b. In batteries", "c. In fertilizers", "d. In construction"
        };

        char ans[5] = {'b', 'a', 'b', 'a', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 33:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for selenium?",
            "2. In which state of matter is selenium most commonly found at room temperature?",
            "3. What is the atomic number of selenium?",
            "4. Which nonmetal is immediately before selenium in the periodic table?",
            "5. What is the primary use of selenium?"
        };

        char options[20][50] =
        {
            "a. Se", "b. Sl", "c. Sm", "d. Sf",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 32", "b. 33", "c. 34", "d. 35",
            "a. Tellurium", "b. Arsenic", "c. Sulfur", "d. Bromine",
            "a. In electronics and photovoltaic devices", "b. In batteries", "c. In fertilizers", "d. In construction"
        };

        char ans[5] = {'a', 'a', 'b', 'b', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 34:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for selenium?",
            "2. In which state of matter is selenium most commonly found at room temperature?",
            "3. What is the atomic number of selenium?",
            "4. Which nonmetal is immediately before selenium in the periodic table?",
            "5. What is the primary use of selenium?"
        };

        char options[20][50] =
        {
            "a. Se", "b. Sl", "c. Sm", "d. Sf",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 32", "b. 33", "c. 34", "d. 35",
            "a. Tellurium", "b. Arsenic", "c. Sulfur", "d. Bromine",
            "a. In electronics and photovoltaic devices", "b. In batteries", "c. In fertilizers", "d. In construction"
        };

        char ans[5] = {'a', 'a', 'b', 'b', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 35:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for bromine?",
            "2. In which state of matter is bromine most commonly found at room temperature?",
            "3. What is the atomic number of bromine?",
            "4. Which halogen is immediately before bromine in the periodic table?",
            "5. What is the primary use of bromine?"
        };

        char options[20][50] =
        {
            "a. Br", "b. Bo", "c. Bm", "d. Be",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 34", "b. 35", "c. 36", "d. 37",
            "a. Fluorine", "b. Chlorine", "c. Iodine", "d. Astatine",
            "a. In flame retardants and pesticides", "b. In batteries", "c. In fertilizers", "d. In construction"
        };

        char ans[5] = {'a', 'b', 'b', 'c', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 36:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for krypton?",
            "2. In which state of matter is krypton most commonly found at room temperature?",
            "3. What is the atomic number of krypton?",
            "4. Which noble gas is immediately before krypton in the periodic table?",
            "5. What is the primary use of krypton?"
        };

        char options[20][50] =
        {
            "a. Kr", "b. Ko", "c. Kt", "d. Ke",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 35", "b. 36", "c. 37", "d. 38",
            "a. Helium", "b. Neon", "c. Argon", "d. Xenon",
            "a. In lighting, including lasers and flash lamps", "b. In batteries", "c. In fertilizers", "d. In construction"
        };

        char ans[5] = {'a', 'c', 'b', 'c', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 37:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for rubidium?",
            "2. In which state of matter is rubidium most commonly found at room temperature?",
            "3. What is the atomic number of rubidium?",
            "4. Which alkali metal is immediately before rubidium in the periodic table?",
            "5. What is the primary use of rubidium?"
        };

        char options[20][50] =
        {
            "a. Ru", "b. Rb", "c. Rh", "d. Ra",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 36", "b. 37", "c. 38", "d. 39",
            "a. Sodium", "b. Lithium", "c. Potassium", "d. Cesium",
            "a. In atomic clocks and research", "b. In batteries", "c. In fertilizers", "d. In construction"
        };

        char ans[5] = {'b', 'c', 'b', 'c', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 38:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for strontium?",
            "2. In which state of matter is strontium most commonly found at room temperature?",
            "3. What is the atomic number of strontium?",
            "4. Which alkaline earth metal is immediately before strontium in the periodic table?",
            "5. What is the primary use of strontium?"
        };

        char options[20][50] =
        {
            "a. Sr", "b. St", "c. Sm", "d. Si",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 37", "b. 38", "c. 39", "d. 40",
            "a. Beryllium", "b. Magnesium", "c. Calcium", "d. Barium",
            "a. In fireworks and flares", "b. In batteries", "c. In fertilizers", "d. In construction"
        };

        char ans[5] = {'a', 'a', 'b', 'c', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 39:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for yttrium?",
            "2. In which state of matter is yttrium most commonly found at room temperature?",
            "3. What is the atomic number of yttrium?",
            "4. Which transition metal is immediately before yttrium in the periodic table?",
            "5. What is the primary use of yttrium?"
        };

        char options[20][50] =
        {
            "a. Yt", "b. Ym", "c. Yr", "d. Ys",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 38", "b. 39", "c. 40", "d. 41",
            "a. Zirconium", "b. Zirconium", "c. Hafnium", "d. Titanium",
            "a. In alloys for aircraft and missiles", "b. In batteries", "c. In fertilizers", "d. In construction"
        };

        char ans[5] = {'a', 'a', 'b', 'a', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 40:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for zirconium?",
            "2. In which state of matter is zirconium most commonly found at room temperature?",
            "3. What is the atomic number of zirconium?",
            "4. Which transition metal is immediately before zirconium in the periodic table?",
            "5. What is the primary use of zirconium?"
        };

        char options[20][100] =
        {
            "a. Zi", "b. Zn", "c. Zr", "d. Za",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 39", "b. 40", "c. 41", "d. 42",
            "a. Yttrium", "b. Hafnium", "c. Niobium", "d. Vanadium",
            "a. In nuclear reactors and alloys for aerospace applications", "b. In batteries", "c. In fertilizers", "d. In construction"
        };

        char ans[5] = {'c', 'a', 'b', 'b', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 41:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for niobium?",
            "2. In which state of matter is niobium most commonly found at room temperature?",
            "3. What is the atomic number of niobium?",
            "4. Which transition metal is immediately before niobium in the periodic table?",
            "5. What is the primary use of niobium?"
        };

        char options[20][100] =
        {
            "a. Ni", "b. No", "c. Nb", "d. Na",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 40", "b. 41", "c. 42", "d. 43",
            "a. Zirconium", "b. Molybdenum", "c. Technetium", "d. Tantalum",
            "a. In superalloys for jet engines and rocket engines", "b. In batteries", "c. In fertilizers", "d. In construction"
        };

        char ans[5] = {'c', 'a', 'b', 'a', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 42:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for molybdenum?",
            "2. In which state of matter is molybdenum most commonly found at room temperature?",
            "3. What is the atomic number of molybdenum?",
            "4. Which transition metal is immediately before molybdenum in the periodic table?",
            "5. What is the primary use of molybdenum?"
        };

        char options[20][100] =
        {
            "a. My", "b. Mo", "c. Mb", "d. Mn",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 41", "b. 42", "c. 43", "d. 44",
            "a. Niobium", "b. Technetium", "c. Ruthenium", "d. Tantalum",
            "a. In alloys to strengthen steel and in lubricants", "b. In batteries", "c. In fertilizers", "d. In construction"
        };

        char ans[5] = {'b', 'a', 'b', 'a', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 43:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for technetium?",
            "2. In which state of matter is technetium most commonly found at room temperature?",
            "3. What is the atomic number of technetium?",
            "4. Which transition metal is immediately before technetium in the periodic table?",
            "5. What is the primary use of technetium?"
        };

        char options[20][100] =
        {
            "a. Tn", "b. Tc", "c. Te", "d. Ts",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 42", "b. 43", "c. 44", "d. 45",
            "a. Molybdenum", "b. Ruthenium", "c. Rhodium", "d. Palladium",
            "a. In medical imaging and research", "b. In batteries", "c. In fertilizers", "d. In construction"
        };

        char ans[5] = {'b', 'c', 'b', 'a', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 44:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for ruthenium?",
            "2. In which state of matter is ruthenium most commonly found at room temperature?",
            "3. What is the atomic number of ruthenium?",
            "4. Which transition metal is immediately before ruthenium in the periodic table?",
            "5. What is the primary use of ruthenium?"
        };

        char options[20][100] =
        {
            "a. Ru", "b. Rh", "c. Rm", "d. Rs",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 43", "b. 44", "c. 45", "d. 46",
            "a. Technetium", "b. Rhodium", "c. Palladium", "d. Silver",
            "a. In electronics and in alloys for wear-resistant electrical contacts", "b. In batteries", "c. In fertilizers", "d. In construction"
        };

        char ans[5] = {'a', 'a', 'b', 'a', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 45:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for rhodium?",
            "2. In which state of matter is rhodium most commonly found at room temperature?",
            "3. What is the atomic number of rhodium?",
            "4. Which transition metal is immediately before rhodium in the periodic table?",
            "5. What is the primary use of rhodium?"
        };

        char options[20][100] =
        {
            "a. Rh", "b. Ro", "c. Rd", "d. Rn",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 44", "b. 45", "c. 46", "d. 47",
            "a. Palladium", "b. Silver", "c. Iridium", "d. Platinum",
            "a. In catalytic converters for cars", "b. In batteries", "c. In fertilizers", "d. In construction"
        };

        char ans[5] = {'a', 'a', 'b', 'c', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 46:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for palladium?",
            "2. In which state of matter is palladium most commonly found at room temperature?",
            "3. What is the atomic number of palladium?",
            "4. Which transition metal is immediately before palladium in the periodic table?",
            "5. What is the primary use of palladium?"
        };

        char options[20][100] =
        {
            "a. Pd", "b. Pl", "c. Pm", "d. Pn",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 45", "b. 46", "c. 47", "d. 48",
            "a. Rhodium", "b. Silver", "c. Iridium", "d. Platinum",
            "a. Incatalyticconvertersforcars and in electronics", "b. In batteries", "c. In fertilizers", "d. In construction"
        };

        char ans[5] = {'a', 'a', 'b', 'a', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 47:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for silver?",
            "2. In which state of matter is silver most commonly found at room temperature?",
            "3. What is the atomic number of silver?",
            "4. Which transition metal is immediately before silver in the periodic table?",
            "5. What is the primary use of silver?"
        };

        char options[20][100] =
        {
            "a. Si", "b. Sl", "c. Ag", "d. Sg",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 46", "b. 47", "c. 48", "d. 49",
            "a. Palladium", "b. Rhodium", "c. Cadmium", "d. Zinc",
            "a. In jewelry, coins, and as a conductor of electricity", "b. In batteries", "c. In fertilizers", "d. In construction"
        };

        char ans[5] = {'c', 'a', 'b', 'b', 'a'};

        for (i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 48:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for cadmium?",
            "2. In which state of matter is cadmium most commonly found at room temperature?",
            "3. What is the atomic number of cadmium?",
            "4. Which transition metal is immediately before cadmium in the periodic table?",
            "5. What is the primary use of cadmium?"
        };

        char options[20][50] =
        {
            "a. Ca", "b. Cd", "c. Cm", "d. Ce",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 46", "b. 48", "c. 50", "d. 52",
            "a. Zinc", "b. Silver", "c. Copper", "d. Nickel",
            "a. In batteries and pigments", "b. In jewelry", "c. In construction", "d. In fertilizers"
        };

        char ans[5] = {'b', 'a', 'b', 'a', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 49:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for indium?",
            "2. In which state of matter is indium most commonly found at room temperature?",
            "3. What is the atomic number of indium?",
            "4. Which element is immediately before indium in the periodic table?",
            "5. What is the primary use of indium?"
        };

        char options[20][50] =
        {
            "a. I", "b. Ir", "c. In", "d. Id",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 48", "b. 49", "c. 50", "d. 51",
            "a. Tin", "b. Gallium", "c. Germanium", "d. Tin",
            "a. In electronics and solar panels", "b. In jewelry", "c. In construction", "d. In fertilizers"
        };

        char ans[5] = {'c', 'a', 'b', 'b', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 50:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for tin?",
            "2. In which state of matter is tin most commonly found at room temperature?",
            "3. What is the atomic number of tin?",
            "4. Which element is immediately after tin in the periodic table?",
            "5. What is the primary use of tin?"
        };

        char options[20][50] =
        {
            "a. Ti", "b. Tn", "c. Sn", "d. Si",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 47", "b. 48", "c. 49", "d. 50",
            "a. Lead", "b. Antimony", "c. Silicon", "d. Germanium",
            "a. In cans and alloys", "b. In electronics", "c. In construction", "d. In fertilizers"
        };

        char ans[5] = {'c', 'a', 'c', 'a', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 51:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for antimony?",
            "2. In which state of matter is antimony most commonly found at room temperature?",
            "3. What is the atomic number of antimony?",
            "4. Which element is immediately after antimony in the periodic table?",
            "5. What is the primary use of antimony?"
        };

        char options[20][50] =
        {
            "a. As", "b. At", "c. Am", "d. Sb",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 49", "b. 50", "c. 51", "d. 52",
            "a. Tellurium", "b. Tin", "c. Lead", "d. Bismuth",
            "a. In flame retardants and alloys", "b. In jewelry", "c. In construction", "d. In fertilizers"
        };

        char ans[5] = {'d', 'a', 'c', 'd', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 52:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for tellurium?",
            "2. In which state of matter is tellurium most commonly found at room temperature?",
            "3. What is the atomic number of tellurium?",
            "4. Which element is immediately before tellurium in the periodic table?",
            "5. What is the primary use of tellurium?"
        };

        char options[20][50] =
        {
            "a. Te", "b. Tl", "c. Tn", "d. Ts",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 50", "b. 52", "c. 54", "d. 56",
            "a. Antimony", "b. Iodine", "c. Selenium", "d. Xenon",
            "a. In solar panels and alloys", "b. In jewelry", "c. In construction", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 53:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for iodine?",
            "2. In which state of matter is iodine most commonly found at room temperature?",
            "3. What is the atomic number of iodine?",
            "4. Which element is immediately before iodine in the periodic table?",
            "5. What is the primary use of iodine?"
        };

        char options[20][50] =
        {
            "a. I", "b. Io", "c. Id", "d. In",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 52", "b. 53", "c. 54", "d. 55",
            "a. Xenon", "b. Tellurium", "c. Bromine", "d. Antimony",
            "a. In medicine and as a disinfectant", "b. In jewelry", "c. In construction", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 54:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for xenon?",
            "2. In which state of matter is xenon most commonly found at room temperature?",
            "3. What is the atomic number of xenon?",
            "4. Which element is immediately before xenon in the periodic table?",
            "5. What is the primary use of xenon?"
        };

        char options[20][50] =
        {
            "a. Xn", "b. Xe", "c. Xo", "d. Xa",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 52", "b. 54", "c. 56", "d. 58",
            "a. Radon", "b. Krypton", "c. Argon", "d. Iodine",
            "a. In lighting and anesthesia", "b. In jewelry", "c. In nuclear reactors", "d. In fertilizers"
        };

        char ans[5] = {'b', 'c', 'b', 'd', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 55:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for cesium?",
            "2. In which state of matter is cesium most commonly found at room temperature?",
            "3. What is the atomic number of cesium?",
            "4. Which element is immediately after cesium in the periodic table?",
            "5. What is the primary use of cesium?"
        };

        char options[20][50] =
        {
            "a. Ce", "b. Cs", "c. Cn", "d. Co",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 54", "b. 55", "c. 56", "d. 57",
            "a. Rubidium", "b. Francium", "c. Barium", "d. Xenon",
            "a. In atomic clocks and in drilling fluids", "b. In jewelry", "c. In nuclear reactors", "d. In fertilizers"
        };

        char ans[5] = {'b', 'b', 'b', 'b', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 56:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for barium?",
            "2. In which state of matter is barium most commonly found at room temperature?",
            "3. What is the atomic number of barium?",
            "4. Which element is immediately after barium in the periodic table?",
            "5. What is the primary use of barium?"
        };

        char options[20][50] =
        {
            "a. B", "b. Ba", "c. Br", "d. Bi",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 54", "b. 56", "c. 58", "d. 60",
            "a. Cesium", "b. Francium", "c. Strontium", "d. Xenon",
            "a. In medicine and in fireworks", "b. In jewelry", "c. In nuclear reactors", "d. In fertilizers"
        };

        char ans[5] = {'b', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 57:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for lanthanum?",
            "2. In which state of matter is lanthanum most commonly found at room temperature?",
            "3. What is the atomic number of lanthanum?",
            "4. Which element is immediately after lanthanum in the periodic table?",
            "5. What is the primary use of lanthanum?"
        };

        char options[20][50] =
        {
            "a. Lu", "b. La", "c. Lr", "d. Lm",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 56", "b. 57", "c. 58", "d. 59",
            "a. Cerium", "b. Praseodymium", "c. Cerium", "d. Promethium",
            "a. In optical glasses and in hybrid car batteries", "b. In jewelry", "c. In nuclear reactors", "d. In fertilizers"
        };

        char ans[5] = {'b', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 58:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for cerium?",
            "2. In which state of matter is cerium most commonly found at room temperature?",
            "3. What is the atomic number of cerium?",
            "4. Which element is immediately after cerium in the periodic table?",
            "5. What is the primary use of cerium?"
        };

        char options[20][50] =
        {
            "a. Ce", "b. Cr", "c. Cm", "d. Cn",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 56", "b. 58", "c. 60", "d. 62",
            "a. Lanthanum", "b. Praseodymium", "c. Neodymium", "d. Thorium",
            "a. In catalysts and in glass manufacturing", "b. In jewelry", "c. In nuclear reactors", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 59:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for praseodymium?",
            "2. In which state of matter is praseodymium most commonly found at room temperature?",
            "3. What is the atomic number of praseodymium?",
            "4. Which element is immediately after praseodymium in the periodic table?",
            "5. What is the primary use of praseodymium?"
        };

        char options[20][50] =
        {
            "a. Po", "b. Pm", "c. Pr", "d. Pt",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 58", "b. 59", "c. 60", "d. 61",
            "a. Cerium", "b. Neodymium", "c. Promethium", "d. Samarium",
            "a. In magnets and in coloring glass", "b. In jewelry", "c. In nuclear reactors", "d. In fertilizers"
        };

        char ans[5] = {'c', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 60:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for neodymium?",
            "2. In which state of matter is neodymium most commonly found at room temperature?",
            "3. What is the atomic number of neodymium?",
            "4. Which element is immediately after neodymium in the periodic table?",
            "5. What is the primary use of neodymium?"
        };

        char options[20][50] =
        {
            "a. N", "b. Nd", "c. No", "d. Nt",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 58", "b. 60", "c. 62", "d. 64",
            "a. Promethium", "b. Samarium", "c. Europium", "d. Terbium",
            "a. In magnets and lasers", "b. In jewelry", "c. In nuclear reactors", "d. In fertilizers"
        };

        char ans[5] = {'b', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 61:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for promethium?",
            "2. In which state of matter is promethium most commonly found at room temperature?",
            "3. What is the atomic number of promethium?",
            "4. Which element is immediately after promethium in the periodic table?",
            "5. What is the primary use of promethium?"
        };

        char options[20][100] =
        {
            "a. Pm", "b. Pr", "c. Po", "d. Pt",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 59", "b. 61", "c. 63", "d. 65",
            "a. Samarium", "b. Europium", "c. Neodymium", "d. Neptunium",
            "a. In nuclear batteries and in portable X-ray sources", "b. In jewelry", "c. In nuclear reactors", "d. In fertilizers"
        };

        char ans[5] = {'a', 'c', 'a', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 62:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for samarium?",
            "2. In which state of matter is samarium most commonly found at room temperature?",
            "3. What is the atomic number of samarium?",
            "4. Which element is immediately after samarium in the periodic table?",
            "5. What is the primary use of samarium?"
        };

        char options[20][50] =
        {
            "a. Sm", "b. Sa", "c. Sr", "d. Sd",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 60", "b. 62", "c. 64", "d. 66",
            "a. Europium", "b. Gadolinium", "c. Neodymium", "d. Europium",
            "a. In magnets and in nuclear reactors", "b. In jewelry", "c. In nuclear batteries", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 63:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for europium?",
            "2. In which state of matter is europium most commonly found at room temperature?",
            "3. What is the atomic number of europium?",
            "4. Which element is immediately after europium in the periodic table?",
            "5. What is the primary use of europium?"
        };

        char options[20][50] =
        {
            "a. Er", "b. Eu", "c. Ep", "d. Em",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 62", "b. 63", "c. 64", "d. 65",
            "a. Gadolinium", "b. Terbium", "c. Dysprosium", "d. Holmium",
            "a. In color TVs and LED lights", "b. In jewelry", "c. In nuclear reactors", "d. In fertilizers"
        };

        char ans[5] = {'b', 'a', 'b', 'a', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 64:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for gadolinium?",
            "2. In which state of matter is gadolinium most commonly found at room temperature?",
            "3. What is the atomic number of gadolinium?",
            "4. Which element is immediately after gadolinium in the periodic table?",
            "5. What is the primary use of gadolinium?"
        };

        char options[20][50] =
        {
            "a. Gd", "b. Ga", "c. Go", "d. Gl",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 62", "b. 64", "c. 66", "d. 68",
            "a. Terbium", "b. Dysprosium", "c. Holmium", "d. Europium",
            "a. In MRI contrast agents and in nuclear reactors", "b. In jewelry", "c. In semiconductors", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'd', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 65:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for terbium?",
            "2. In which state of matter is terbium most commonly found at room temperature?",
            "3. What is the atomic number of terbium?",
            "4. Which element is immediately after terbium in the periodic table?",
            "5. What is the primary use of terbium?"
        };

        char options[20][100] =
        {
            "a. Tb", "b. Te", "c. Ta", "d. Tm",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 63", "b. 65", "c. 67", "d. 69",
            "a. Dysprosium", "b. Holmium", "c. Erbium", "d. Thulium",
            "a. In phosphors for color TV tubes and in solid-state devices", "b. In jewelry", "c. In nuclear reactors", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 66:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for dysprosium?",
            "2. In which state of matter is dysprosium most commonly found at room temperature?",
            "3. What is the atomic number of dysprosium?",
            "4. Which element is immediately before dysprosium in the periodic table?",
            "5. What is the primary use of dysprosium?"
        };

        char options[20][50] =
        {
            "a. Dy", "b. Ds", "c. Dr", "d. Dp",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 65", "b. 66", "c. 67", "d. 68",
            "a. Terbium", "b. Holmium", "c. Neodymium", "d. Gadolinium",
            "a. In MRI machines", "b. In nuclear reactors", "c. In smartphone screens", "d. In optical lenses"
        };

        char ans[5] = {'a', 'a', 'b', 'd', 'b'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 67:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for holmium?",
            "2. In which state of matter is holmium most commonly found at room temperature?",
            "3. What is the atomic number of holmium?",
            "4. Which element is immediately after holmium in the periodic table?",
            "5. What is the primary use of holmium?"
        };

        char options[20][60] =
        {
            "a. Hm", "b. Ho", "c. Hu", "d. Hl",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 66", "b. 67", "c. 68", "d. 69",
            "a. Erbium", "b. Thulium", "c. Dysprosium", "d. Erbium",
            "a. In nuclear control rods and in microwave equipment", "b. In jewelry", "c. In nuclear reactors", "d. In fertilizers"
        };

        char ans[5] = {'b', 'a', 'b', 'd', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 68:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for erbium?",
            "2. In which state of matter is erbium most commonly found at room temperature?",
            "3. What is the atomic number of erbium?",
            "4. Which element is immediately after erbium in the periodic table?",
            "5. What is the primary use of erbium?"
        };

        char options[20][50] =
        {
            "a. Em", "b. Er", "c. Eb", "d. Eo",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 66", "b. 68", "c. 70", "d. 72",
            "a. Thulium", "b. Holmium", "c. Dysprosium", "d. Thulium",
            "a. In optical fibers and in lasers", "b. In jewelry", "c. In nuclear reactors", "d. In fertilizers"
        };

        char ans[5] = {'b', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 69:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for thulium?",
            "2. In which state of matter is thulium most commonly found at room temperature?",
            "3. What is the atomic number of thulium?",
            "4. Which element is immediately after thulium in the periodic table?",
            "5. What is the primary use of thulium?"
        };

        char options[20][50] =
        {
            "a. Th", "b. Tu", "c. Tm", "d. Tl",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 68", "b. 69", "c. 70", "d. 71",
            "a. Holmium", "b. Erbium", "c. Ytterbium", "d. Lutetium",
            "a. In portable X-ray machines and in lasers", "b. In jewelry", "c. In nuclear reactors", "d. In fertilizers"
        };

        char ans[5] = {'c', 'a', 'b', 'd', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 70:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for ytterbium?",
            "2. In which state of matter is ytterbium most commonly found at room temperature?",
            "3. What is the atomic number of ytterbium?",
            "4. Which element is immediately after ytterbium in the periodic table?",
            "5. What is the primary use of ytterbium?"
        };

        char options[20][100] =
        {
            "a. Yb", "b. Ym", "c. Yu", "d. Yt",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 69", "b. 70", "c. 71", "d. 72",
            "a. Erbium", "b. Holmium", "c. Lutetium", "d. Thulium",
            "a. In lasers and as a catalyst in organic synthesis", "b. In jewelry", "c. In nuclear reactors", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 71:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for lutetium?",
            "2. In which state of matter is lutetium most commonly found at room temperature?",
            "3. What is the atomic number of lutetium?",
            "4. Which element is immediately after lutetium in the periodic table?",
            "5. What is the primary use of lutetium?"
        };

        char options[20][50] =
        {
            "a. Lu", "b. Lm", "c. Lt", "d. Lc",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 71", "b. 72", "c. 73", "d. 74",
            "a. Hafnium", "b. Tantalum", "c. Tungsten", "d. Rhenium",
            "a. In PET scans and in cancer therapy", "b. In jewelry", "c. In nuclear reactors", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'd', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 72:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for hafnium?",
            "2. In which state of matter is hafnium most commonly found at room temperature?",
            "3. What is the atomic number of hafnium?",
            "4. Which element is immediately after hafnium in the periodic table?",
            "5. What is the primary use of hafnium?"
        };

        char options[20][100] =
        {
            "a. Ha", "b. Hf", "c. Hn", "d. Hm",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 71", "b. 72", "c. 73", "d. 74",
            "a. Tantalum", "b. Tungsten", "c.Rhenium", "d. Osmium",
            "a. In nuclear reactors and in superalloys", "b. In jewelry", "c. In PET scans", "d. In fertilizers"
        };

        char ans[5] = {'b', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 73:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for tantalum?",
            "2. In which state of matter is tantalum most commonly found at room temperature?",
            "3. What is the atomic number of tantalum?",
            "4. Which element is immediately after tantalum in the periodic table?",
            "5. What is the primary use of tantalum?"
        };

        char options[20][100] =
        {
            "a. Ta", "b. Tm", "c. Tn", "d. Tl",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 72", "b. 73", "c. 74", "d. 75",
            "a. Tungsten", "b. Rhenium", "c. Osmium", "d. Iridium",
            "a. In electronic capacitors and in medical implants", "b. In jewelry", "c. In nuclear reactors", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 74:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for tungsten?",
            "2. In which state of matter is tungsten most commonly found at room temperature?",
            "3. What is the atomic number of tungsten?",
            "4. Which element is immediately after tungsten in the periodic table?",
            "5. What is the primary use of tungsten?"
        };

        char options[20][50] =
        {
            "a. Tu", "b. Tg", "c. Tn", "d. W",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 73", "b. 74", "c. 75", "d. 76",
            "a. Rhenium", "b. Osmium", "c. Iridium", "d. Platinum",
            "a. In light bulbs and in electrical contacts", "b. In jewelry", "c. In nuclear reactors", "d. In fertilizers"
        };

        char ans[5] = {'d', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 75:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for rhenium?",
            "2. In which state of matter is rhenium most commonly found at room temperature?",
            "3. What is the atomic number of rhenium?",
            "4. Which element is immediately after rhenium in the periodic table?",
            "5. What is the primary use of rhenium?"
        };

        char options[20][50] =
        {
            "a. Rh", "b. Re", "c. Rn", "d. Rm",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 74", "b. 75", "c. 76", "d. 77",
            "a. Osmium", "b. Iridium", "c. Platinum", "d. Gold",
            "a. In catalysts and in jet engines", "b. In jewelry", "c. In nuclear reactors", "d. In fertilizers"
        };

        char ans[5] = {'b', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 76:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for osmium?",
            "2. In which state of matter is osmium most commonly found at room temperature?",
            "3. What is the atomic number of osmium?",
            "4. Which element is immediately after osmium in the periodic table?",
            "5. What is the primary use of osmium?"
        };

        char options[20][100] =
        {
            "a. Os", "b. Om", "c. O", "d. Oh",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 75", "b. 76", "c. 77", "d. 78",
            "a. Iridium", "b. Platinum", "c. Gold", "d. Mercury",
            "a. In alloys for fountain pen tips and in electrical contacts", "b. In jewelry", "c. In nuclear reactors", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'a', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 77:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for iridium?",
            "2. In which state of matter is iridium most commonly found at room temperature?",
            "3. What is the atomic number of iridium?",
            "4. Which element is immediately after iridium in the periodic table?",
            "5. What is the primary use of iridium?"
        };

        char options[20][50] =
        {
            "a. Id", "b. Ir", "c. I", "d. Io",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 76", "b. 77", "c. 78", "d. 79",
            "a. Platinum", "b. Gold", "c. Mercury", "d. Thallium",
            "a. In spark plugs and in electrical contacts", "b. In jewelry", "c. In nuclear reactors", "d. In fertilizers"
        };

        char ans[5] = {'b', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 78:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for platinum?",
            "2. In which state of matter is platinum most commonly found at room temperature?",
            "3. What is the atomic number of platinum?",
            "4. Which element is immediately after platinum in the periodic table?",
            "5. What is the primary use of platinum?"
        };

        char options[20][50] =
        {
            "a. Pt", "b. Pl", "c. Pm", "d. Pn",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 77", "b. 78", "c. 79", "d. 80",
            "a. Gold", "b. Mercury", "c. Thallium", "d. Lead",
            "a. In catalytic converters and in jewelry", "b. In batteries", "c. In nuclear reactors", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 79:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for gold?",
            "2. In which state of matter is gold most commonly found at room temperature?",
            "3. What is the atomic number of gold?",
            "4. Which element is immediately after gold in the periodic table?",
            "5. What is the primary use of gold?"
        };

        char options[20][50] =
        {
            "a. Gd", "b. Au", "c. Go", "d. Ag",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 78", "b. 79", "c. 80", "d. 81",
            "a. Mercury", "b. Thallium", "c. Lead", "d. Bismuth",
            "a. In jewelry and in electronics", "b. In batteries", "c. In nuclear reactors", "d. In fertilizers"
        };

        char ans[5] = {'b', 'a', 'b', 'd', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 80:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for mercury?",
            "2. In which state of matter is mercury most commonly found at room temperature?",
            "3. What is the atomic number of mercury?",
            "4. Which element is immediately after mercury in the periodic table?",
            "5. What is the primary use of mercury?"
        };

        char options[20][50] =
        {
            "a. Mr", "b. Me", "c. Hg", "d. Hy",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 79", "b. 80", "c. 81", "d. 82",
            "a. Thallium", "b. Lead", "c. Bismuth", "d. Polonium",
            "a. In thermometers and in dental amalgams", "b. In batteries", "c. In nuclear reactors", "d. In fertilizers"
        };

        char ans[5] = {'c', 'b', 'b', 'd', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 81:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for thallium?",
            "2. In which state of matter is thallium most commonly found at room temperature?",
            "3. What is the atomic number of thallium?",
            "4. Which element is immediately after thallium in the periodic table?",
            "5. What is the primary use of thallium?"
        };

        char options[20][50] =
        {
            "a. Tl", "b. Th", "c. Ti", "d. Tm",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 80", "b. 81", "c. 82", "d. 83",
            "a. Lead", "b. Bismuth", "c. Polonium", "d. Astatine",
            "a. In rat poisons and in optical lenses", "b. In batteries", "c. In nuclear reactors", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 82:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for lead?",
            "2. In which state of matter is lead most commonly found at room temperature?",
            "3. What is the atomic number of lead?",
            "4. Which element is immediately after lead in the periodic table?",
            "5. What is the primary use of lead?"
        };

        char options[20][50] =
        {
            "a. Ld", "b. Le", "c. Lp", "d. Pb",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 81", "b. 82", "c. 83", "d. 84",
            "a. Bismuth", "b. Polonium", "c. Astatine", "d. Radon",
            "a. In batteries and in construction materials", "b. In jewelry", "c. In nuclear reactors", "d. In fertilizers"
        };

        char ans[5] = {'d', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 83:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for bismuth?",
            "2. In which state of matter is bismuth most commonly found at room temperature?",
            "3. What is the atomic number of bismuth?",
            "4. Which element is immediately after bismuth in the periodic table?",
            "5. What is the primary use of bismuth?"
        };

        char options[20][50] =
        {
            "a. Bi", "b. Bm", "c. Bs", "d. Bu",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 82", "b. 83", "c. 84", "d. 85",
            "a. Polonium", "b. Astatine", "c. Radon", "d. Francium",
            "a. In pharmaceuticals and in cosmetics", "b. In batteries", "c. In nuclear reactors", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'c', 'd', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 84:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for polonium?",
            "2. In which state of matter is polonium most commonly found at room temperature?",
            "3. What is the atomic number of polonium?",
            "4. Which element is immediately after polonium in the periodic table?",
            "5. What is the primary use of polonium?"
        };

        char options[20][50] =
        {
            "a. Pl", "b. Po", "c. Pn", "d. Pa",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 83", "b. 84", "c. 85", "d. 86",
            "a. Astatine", "b. Radon", "c. Francium", "d. Radium",
            "a. In nuclear reactors and in research", "b. In batteries", "c. In pharmaceuticals", "d. In fertilizers"
        };

        char ans[5] = {'b', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 85:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for astatine?",
            "2. In which state of matter is astatine most commonly found at room temperature?",
            "3. What is the atomic number of astatine?",
            "4. Which element is immediately after astatine in the periodic table?",
            "5. What is the primary use of astatine?"
        };

        char options[20][50] =
        {
            "a. At", "b. As", "c. Atm", "d. Ati",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 84", "b. 85", "c. 86", "d. 87",
            "a. Radon", "b. Francium", "c. Radium", "d. Actinium",
            "a. Primarily in research", "b. In nuclear reactors", "c. In pharmaceuticals", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'd', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 86:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for radon?",
            "2. In which state of matter is radon most commonly found at room temperature?",
            "3. What is the atomic number of radon?",
            "4. Which element is immediately after radon in the periodic table?",
            "5. What is the primary use of radon?"
        };

        char options[20][50] =
        {
            "a. Ro", "b. Rn", "c. Rd", "d. Ra",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 85", "b. 86", "c. 87", "d. 88",
            "a. Francium", "b. Radium", "c. Actinium", "d. Thorium",
            "a. Primarily in research", "b. In nuclear reactors", "c. In pharmaceuticals", "d. In fertilizers"
        };

        char ans[5] = {'b', 'c', 'b', 'd', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 87:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for francium?",
            "2. In which state of matter is francium most commonly found at room temperature?",
            "3. What is the atomic number of francium?",
            "4. Which element is immediately after francium in the periodic table?",
            "5. What is the primary use of francium?"
        };

        char options[20][50] =
        {
            "a. Fc", "b. Fr", "c. Fn", "d. Fa",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 86", "b. 87", "c. 88", "d. 89",
            "a. Radium", "b. Actinium", "c. Thorium", "d. Protactinium",
            "a. Primarily in research", "b. In nuclear reactors", "c. In pharmaceuticals", "d. In fertilizers"
        };

        char ans[5] = {'b', 'c', 'b', 'd', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 88:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for radium?",
            "2. In which state of matter is radium most commonly found at room temperature?",
            "3. What is the atomic number of radium?",
            "4. Which element is immediately after radium in the periodic table?",
            "5. What is the primary use of radium?"
        };

        char options[20][50] =
        {
            "a. Rd", "b. Ri", "c. Ra", "d. Rm",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 87", "b. 88", "c. 89", "d. 90",
            "a. Actinium", "b. Thorium", "c. Protactinium", "d. Uranium",
            "a. In nuclear medicine and in luminous paint", "b. In batteries", "c. In nuclear reactors", "d. In fertilizers"
        };

        char ans[5] = {'c', 'a', 'b', 'd', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 89:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for actinium?",
            "2. In which state of matter is actinium most commonly found at room temperature?",
            "3. What is the atomic number of actinium?",
            "4. Which element is immediately after actinium in the periodic table?",
            "5. What is the primary use of actinium?"
        };

        char options[20][50] =
        {
            "a. Atm", "b. Ac", "c. An", "d. Al",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 88", "b. 89", "c. 90", "d. 91",
            "a. Thorium", "b. Protactinium", "c. Uranium", "d. Neptunium",
            "a. In nuclear medicine and in neutron sources", "b. In batteries", "c. In nuclear reactors", "d. In fertilizers"
        };

        char ans[5] = {'b', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 90:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for thorium?",
            "2. In which state of matter is thorium most commonly found at room temperature?",
            "3. What is the atomic number of thorium?",
            "4. Which element is immediately after thorium in the periodic table?",
            "5. What is the primary use of thorium?"
        };

        char options[20][70] =
        {
            "a. Th", "b. Tr", "c. To", "d. Tm",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 89", "b. 90", "c. 91", "d. 92",
            "a. Protactinium", "b. Uranium", "c. Neptunium", "d. Plutonium",
            "a. In nuclear reactors and in fuel for nuclear power plants", "b. In batteries", "c. In nuclear medicine", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'b', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 91:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for protactinium?",
            "2. In which state of matter is protactinium most commonly found at room temperature?",
            "3. What is the atomic number of protactinium?",
            "4. Which element is immediately after protactinium in the periodic table?",
            "5. What is the primary use of protactinium?"
        };

        char options[20][70] =
        {
            "a. Pr", "b. Po", "c. Pa", "d. Pt",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 90", "b. 91", "c. 92", "d. 93",
            "a. Uranium", "b. Neptunium", "c. Plutonium", "d. Americium",
            "a. As a source of neutrons and in nuclear reactors", "b. In batteries", "c. In nuclear medicine", "d. In fertilizers"
        };

        char ans[5] = {'c', 'a', 'b', 'd', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 92:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for uranium?",
            "2. In which state of matter is uranium most commonly found at room temperature?",
            "3. What is the atomic number of uranium?",
            "4. Which element is immediately after uranium in the periodic table?",
            "5. What is the primary use of uranium?"
        };

        char options[20][100] =
        {
            "a. Un", "b. Ur", "c. Uh", "d. U",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 91", "b. 92", "c. 93", "d. 94",
            "a. Neptunium", "b. Plutonium", "c. Americium", "d. Curium",
            "a. In nuclear reactors and as a fuel for nuclear power plants", "b. In batteries", "c. In nuclear medicine", "d. In fertilizers"
        };

        char ans[5] = {'d', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 93:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for neptunium?",
            "2. In which state of matter is neptunium most commonly found at room temperature?",
            "3. What is the atomic number of neptunium?",
            "4. Which element is immediately after neptunium in the periodic table?",
            "5. What is the primary use of neptunium?"
        };

        char options[20][60] =
        {
            "a. Np", "b. Ne", "c. Na", "d. No",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 92", "b. 93", "c. 94", "d. 95",
            "a. Plutonium", "b. Americium", "c. Curium", "d. Berkelium",
            "a. In nuclear reactors and in nuclear weapons", "b. In batteries", "c. In nuclear medicine", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 94:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for plutonium?",
            "2. In which state of matter is plutonium most commonly found at room temperature?",
            "3. What is the atomic number of plutonium?",
            "4. Which element is immediately after plutonium in the periodic table?",
            "5. What is the primary use of plutonium?"
        };

        char options[20][60] =
        {
            "a. Pl", "b. Pt", "c. Pu", "d. Pm",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 93", "b. 94", "c. 95", "d. 96",
            "a. Americium", "b. Curium", "c. Berkelium", "d. Californium",
            "a. In nuclear weapons and in nuclear reactors", "b. In batteries", "c. In nuclear medicine", "d. In fertilizers"
        };

        char ans[5] = {'c', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 95:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for americium?",
            "2. In which state of matter is americium most commonly found at room temperature?",
            "3. What is the atomic number of americium?",
            "4. Which element is immediately after americium in the periodic table?",
            "5. What is the primary use of americium?"
        };

        char options[20][50] =
        {
            "a. Am", "b. An", "c. Ar", "d. Ac",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 94", "b. 95", "c. 96", "d. 97",
            "a. Curium", "b. Berkelium", "c. Californium", "d. Einsteinium",
            "a. In smoke detectors and in nuclear batteries", "b. In nuclear reactors", "c. In nuclear medicine", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 96:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for curium?",
            "2. In which state of matter is curium most commonly found at room temperature?",
            "3. What is the atomic number of curium?",
            "4. Which element is immediately after curium in the periodic table?",
            "5. What is the primary use of curium?"
        };

        char options[20][50] =
        {
            "a. Cm", "b. Cr", "c. Cu", "d. Ce",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 95", "b. 96", "c. 97", "d. 98",
            "a. Berkelium", "b. Californium", "c. Einsteinium", "d. Fermium",
            "a. In research and in nuclear batteries", "b. In nuclear reactors", "c. In nuclear medicine", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 97:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for berkelium?",
            "2. In which state of matter is berkelium most commonly found at room temperature?",
            "3. What is the atomic number of berkelium?",
            "4. Which element is immediately after berkelium in the periodic table?",
            "5. What is the primary use of berkelium?"
        };

        char options[20][50] =
        {
            "a. Be", "b. Br", "c. Bk", "d. Ba",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 96", "b. 97", "c. 98", "d. 99",
            "a. Californium", "b. Einsteinium", "c. Fermium", "d. Mendelevium",
            "a. In research and in nuclear reactors", "b. In batteries", "c. In nuclear medicine", "d. In fertilizers"
        };

        char ans[5] = {'c', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 98:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for californium?",
            "2. In which state of matter is californium most commonly found at room temperature?",
            "3. What is the atomic number of californium?",
            "4. Which element is immediately after californium in the periodic table?",
            "5. What is the primary use of californium?"
        };

        char options[20][50] =
        {
            "a. Cf", "b. Cl", "c. Ca", "d. Ce",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 97", "b. 98", "c. 99", "d. 100",
            "a. Einsteinium", "b. Fermium", "c. Mendelevium", "d. Nobelium",
            "a. In research and as a neutron source", "b. In batteries", "c. In nuclear medicine", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 99:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for einsteinium?",
            "2. In which state of matter is einsteinium most commonly found at room temperature?",
            "3. What is the atomic number of einsteinium?",
            "4. Which element is immediately after einsteinium in the periodic table?",
            "5. What is the primary use of einsteinium?"
        };

        char options[20][50] =
        {
            "a. Es", "b. En", "c. Ei", "d. Eu",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 98", "b. 99", "c. 100", "d. 101",
            "a. Fermium", "b. Mendelevium", "c. Nobelium", "d. Lawrencium",
            "a. In research and as a neutron source", "b. In batteries", "c. In nuclear medicine", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 100:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for fermium?",
            "2. In which state of matter is fermium most commonly found at room temperature?",
            "3. What is the atomic number of fermium?",
            "4. Which element is immediately after fermium in the periodic table?",
            "5. What is the primary use of fermium?"
        };

        char options[20][50] =
        {
            "a. Fm", "b. Fe", "c. Fr", "d. Fl",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 99", "b. 100", "c. 101", "d. 102",
            "a. Mendelevium", "b. Nobelium", "c. Lawrencium", "d. Rutherfordium",
            "a. In research and as a neutron source", "b. In batteries", "c. In nuclear medicine", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 101:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for mendelevium?",
            "2. In which state of matter is mendelevium most commonly found at room temperature?",
            "3. What is the atomic number of mendelevium?",
            "4. Which element is immediately after mendelevium in the periodic table?",
            "5. What is the primary use of mendelevium?"
        };

        char options[20][50] =
        {
            "a. Me", "b. Md", "c. Mn", "d. Mt",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 100", "b. 101", "c. 102", "d. 103",
            "a. Nobelium", "b. Lawrencium", "c. Rutherfordium", "d. Dubnium",
            "a. In research and as a neutron source", "b. In batteries", "c. In nuclear medicine", "d. In fertilizers"
        };

        char ans[5] = {'b', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 102:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for nobelium?",
            "2. In which state of matter is nobelium most commonly found at room temperature?",
            "3. What is the atomic number of nobelium?",
            "4. Which element is immediately after nobelium in the periodic table?",
            "5. What is the primary use of nobelium?"
        };

        char options[20][50] =
        {
            "a. No", "b. Nb", "c. Ne", "d. Na",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 101", "b. 102", "c. 103", "d. 104",
            "a. Lawrencium", "b. Rutherfordium", "c. Dubnium", "d. Seaborgium",
            "a. In research and as a neutron source", "b. In batteries", "c. In nuclear medicine", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 103:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for lawrencium?",
            "2. In which state of matter is lawrencium most commonly found at room temperature?",
            "3. What is the atomic number of lawrencium?",
            "4. Which element is immediately after lawrencium in the periodic table?",
            "5. What is the primary use of lawrencium?"
        };

        char options[20][50] =
        {
            "a. Lw", "b. Lr", "c. Ln", "d. Lv",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 102", "b. 103", "c. 104", "d. 105",
            "a. Rutherfordium", "b. Dubnium", "c. Seaborgium", "d. Bohrium",
            "a. In research and as a neutron source", "b. In batteries", "c. In nuclear medicine", "d. In fertilizers"
        };

        char ans[5] = {'b', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 104:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for rutherfordium?",
            "2. In which state of matter is rutherfordium most commonly found at room temperature?",
            "3. What is the atomic number of rutherfordium?",
            "4. Which element is immediately after rutherfordium in the periodic table?",
            "5. What is the primary use of rutherfordium?"
        };

        char options[20][50] =
        {
            "a. Ru", "b. Rf", "c. Rh", "d. Re",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 103", "b. 104", "c. 105", "d. 106",
            "a. Dubnium", "b. Seaborgium", "c. Bohrium", "d. Hassium",
            "a. In research and as a neutron source", "b. In batteries", "c. In nuclear medicine", "d. In fertilizers"
        };

        char ans[5] = {'b', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 105:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for dubnium?",
            "2. In which state of matter is dubnium most commonly found at room temperature?",
            "3. What is the atomic number of dubnium?",
            "4. Which element is immediately after dubnium in the periodic table?",
            "5. What is the primary use of dubnium?"
        };

        char options[20][50] =
        {
            "a. Db", "b. Du", "c. Dn", "d. Da",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 104", "b. 105", "c. 106", "d. 107",
            "a. Seaborgium", "b. Bohrium", "c. Hassium", "d. Meitnerium",
            "a. In research and as a neutron source", "b. In batteries", "c. In nuclear medicine", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 106:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for seaborgium?",
            "2. In which state of matter is seaborgium most commonly found at room temperature?",
            "3. What is the atomic number of seaborgium?",
            "4. Which element is immediately after seaborgium in the periodic table?",
            "5. What is the primary use of seaborgium?"
        };

        char options[20][50] =
        {
            "a. Sb", "b. Sg", "c. Se", "d. Si",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 105", "b. 106", "c. 107", "d. 108",
            "a. Bohrium", "b. Hassium", "c. Meitnerium", "d. Darmstadtium",
            "a. In research and as a neutron source", "b. In batteries", "c. In nuclear medicine", "d. In fertilizers"
        };

        char ans[5] = {'b', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 107:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for bohrium?",
            "2. In which state of matter is bohrium most commonly found at room temperature?",
            "3. What is the atomic number of bohrium?",
            "4. Which element is immediately after bohrium in the periodic table?",
            "5. What is the primary use of bohrium?"
        };

        char options[20][50] =
        {
            "a. Bh", "b. Bo", "c. Bm", "d. Bn",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 106", "b. 107", "c. 108", "d. 109",
            "a. Hassium", "b. Meitnerium", "c. Darmstadtium", "d. Roentgenium",
            "a. In research and as a neutron source", "b. In batteries", "c. In nuclear medicine", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 108:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for hassium?",
            "2. In which state of matter is hassium most commonly found at room temperature?",
            "3. What is the atomic number of hassium?",
            "4. Which element is immediately after hassium in the periodic table?",
            "5. What is the primary use of hassium?"
        };

        char options[20][50] =
        {
            "a. Hs", "b. Ha", "c. Hm", "d. Hn",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 107", "b. 108", "c. 109", "d. 110",
            "a. Meitnerium", "b. Darmstadtium", "c. Roentgenium", "d. Copernicium",
            "a. In research and as a neutron source", "b. In batteries", "c. In nuclear medicine", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 109:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for meitnerium?",
            "2. In which state of matter is meitnerium most commonly found at room temperature?",
            "3. What is the atomic number of meitnerium?",
            "4. Which element is immediately after meitnerium in the periodic table?",
            "5. What is the primary use of meitnerium?"
        };

        char options[20][50] =
        {
            "a. Mt", "b. Me", "c. Mn", "d. Mo",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 108", "b. 109", "c. 110", "d. 111",
            "a. Darmstadtium", "b. Roentgenium", "c. Copernicium", "d. Nihonium",
            "a. In research and as a neutron source", "b. In batteries", "c. In nuclear medicine", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 110:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for darmstadtium?",
            "2. In which state of matter is darmstadtium most commonly found at room temperature?",
            "3. What is the atomic number of darmstadtium?",
            "4. Which element is immediately after darmstadtium in the periodic table?",
            "5. What is the primary use of darmstadtium?"
        };

        char options[20][50] =
        {
            "a. Ds", "b. Da", "c. Dm", "d. Dn",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 109", "b. 110", "c. 111", "d. 112",
            "a. Roentgenium", "b. Copernicium", "c. Nihonium", "d. Flerovium",
            "a. In research and as a neutron source", "b. In batteries", "c. In nuclear medicine", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 111:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for roentgenium?",
            "2. In which state of matter is roentgenium most commonly found at room temperature?",
            "3. What is the atomic number of roentgenium?",
            "4. Which element is immediately after roentgenium in the periodic table?",
            "5. What is the primary use of roentgenium?"
        };

        char options[20][50] =
        {
            "a. Rg", "b. Ro", "c. Re", "d. Ra",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 110", "b. 111", "c. 112", "d. 113",
            "a. Copernicium", "b. Nihonium", "c. Flerovium", "d. Moscovium",
            "a. In research and as a neutron source", "b. In batteries", "c. In nuclear medicine", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 112:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for copernicium?",
            "2. In which state of matter is copernicium most commonly found at room temperature?",
            "3. What is the atomic number of copernicium?",
            "4. Which element is immediately after copernicium in the periodic table?",
            "5. What is the primary use of copernicium?"
        };

        char options[20][50] =
        {
            "a. Cp", "b. Cn", "c. Cc", "d. Co",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 111", "b. 112", "c. 113", "d. 114",
            "a. Nihonium", "b. Flerovium", "c. Moscovium", "d. Livermorium",
            "a. In research and as a neutron source", "b. In batteries", "c. In nuclear medicine", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 113:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for nihonium?",
            "2. In which state of matter is nihonium most commonly found at room temperature?",
            "3. What is the atomic number of nihonium?",
            "4. Which element is immediately after nihonium in the periodic table?",
            "5. What is the primary use of nihonium?"
        };

        char options[20][50] =
        {
            "a. Nh", "b. Ni", "c. Nn", "d. Na",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 112", "b. 113", "c. 114", "d. 115",
            "a. Flerovium", "b. Moscovium", "c. Livermorium", "d. Tennessine",
            "a. In research and as a neutron source", "b. In batteries", "c. In nuclear medicine", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 114:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for flerovium?",
            "2. In which state of matter is flerovium most commonly found at room temperature?",
            "3. What is the atomic number of flerovium?",
            "4. Which element is immediately after flerovium in the periodic table?",
            "5. What is the primary use of flerovium?"
        };

        char options[20][50] =
        {
            "a. Fl", "b. Fe", "c. Fv", "d. Fr",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 113", "b. 114", "c. 115", "d. 116",
            "a. Livermorium", "b. Tennessine", "c. Oganesson", "d. Ununennium",
            "a. In research and as a neutron source", "b. In batteries", "c. In nuclear medicine", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 115:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for tennessine?",
            "2. In which state of matter is tennessine most commonly found at room temperature?",
            "3. What is the atomic number of tennessine?",
            "4. Which element is immediately after tennessine in the periodic table?",
            "5. What is the primary use of tennessine?"
        };

        char options[20][50] =
        {
            "a. Ts", "b. Tn", "c. Te", "d. Ti",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 114", "b. 115", "c. 116", "d. 117",
            "a. Oganesson", "b. Ununennium", "c. Unbinilium", "d. Ununquadium",
            "a. In research and as a neutron source", "b. In batteries", "c. In nuclear medicine", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 116:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for oganesson?",
            "2. In which state of matter is oganesson most commonly found at room temperature?",
            "3. What is the atomic number of oganesson?",
            "4. Which element is immediately after oganesson in the periodic table?",
            "5. What is the primary use of oganesson?"
        };

        char options[20][50] =
        {
            "a. Og", "b. On", "c. Oa", "d. Os",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 115", "b. 116", "c. 117", "d. 118",
            "a. Ununennium", "b. Unbinilium", "c. Ununquadium", "d. Ununpentium",
            "a. In research and as a neutron source", "b. In batteries", "c. In nuclear medicine", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    case 117:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for moscovium?",
            "2. In which state of matter is moscovium most commonly found at room temperature?",
            "3. What is the atomic number of moscovium?",
            "4. Which element is immediately after moscovium in the periodic table?",
            "5. What is the primary use of moscovium?"
        };

        char options[20][50] =
        {
            "a. Mc", "b. Mo", "c. Mv", "d. Mn",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 116", "b. 117", "c. 118", "d. 119",
            "a. Unbinilium", "b. Ununquadium", "c. Ununpentium", "d. Livermorium",
            "a. In research and as a neutron source", "b. In batteries", "c. In nuclear medicine", "d. In fertilizers"
        };

        char ans[5] = {'a', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }

    case 118:
    {
        char question[5][100] =
        {
            "1. What is the chemical symbol for livermorium?",
            "2. In which state of matter is livermorium most commonly found at room temperature?",
            "3. What is the atomic number of livermorium?",
            "4. Which element is immediately after livermorium in the periodic table?",
            "5. What is the primary use of livermorium?"
        };

        char options[20][50] =
        {
            "a. Lv", "b. Lr", "c. Lm", "d. Ln",
            "a. Solid", "b. Liquid", "c. Gas", "d. Plasma",
            "a. 117", "b. 118", "c. 119", "d. 120",
            "a. Ununquadium", "b. Ununpentium", "c. Ununhexium", "d. Ununseptium",
            "a. In research and as a neutron source", "b. In batteries", "c. In nuclear medicine", "d. In fertilizers"
        };

        char ans[5] = {'b', 'a', 'b', 'c', 'a'};

        int score = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << question[i] << endl;
            for (int j = i * 4; j < (i * 4) + 4; j++)
            {
                cout << options[j] << " ";
            }
            cout << endl;
            char g;
            cin >> g;
            if (g == ans[i])
            {
                cout << "Correct" << endl;
                score++;
            }
            else
            {
                cout << "Wrong!" << ", correct answer is " << ans[i] << endl;
            }
            cout << endl
                 << endl;
        }
        cout << "---------------" << endl;
        cout << " TOTAL SCORE: ";
        cout << score << endl;
        cout << "---------------" << endl;
        break;
    }
    default:
        cout << "Wrong option" << endl;

    }
}
