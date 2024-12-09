
#include <iostream>
#include"table.hpp"
using namespace std;

void table()
{

    string str[18] = {"H", "He", "Li", "Be", "B", "C", "N", "O", "F", "Ne", "Na", "Mg", "Al", "Si", "P", "S", "Cl", "Ar"};
    int k = 0;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 0; j <= 17; j++)
        {
            if (i == 1 and (j == 0 or j == 17))
            {
                if (str[k].size() == 1)
                    cout << " " << str[k] << "  ";
                else
                    cout << " " << str[k] << " ";

                k++;
            }
            else if ((j < 2 or j >= 12) and i != 1)
            {

                if (str[k].size() == 1)
                    cout << " " << str[k] << "  ";
                else
                    cout << " " << str[k] << " ";
                k++;
            }
            else
                cout << "    ";
        }
        cout << endl
             << endl;
    }
    string strr[100] = {"K ", "Ca", "Sc", "Ti", "V ", "Cr", "Mn", "Fe", "Co", "Ni", "Cu", "Zn", "Ga", "Ge", "As", "Se", "Br", "Kr", "Rb", "Sr",
                        "Y ", "Zr", "Nb", "Mo", "Tc", "Ru", "Rh", "Pd", "Ag", "Cd", "In", "Sn", "Sb", "Te", "I ", "Xe", "Cs", "Ba", "La", "Hf", "Ta", "W ", "Re", "Os", "Ir", "Pt", "Au", "Hg", "Tl", "Pb", "Bi", "Po", "At", "Rn", "Fr", "Ra", "Ac", "Rf", "Db", "Sg", "Bh", "Hs", "Mt", "Ds", "Rg", "Cn", "Nh", "Fl", "Mc", "Lv", "Ts", "Og"};
    int idx = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= 17; j++)
        {
            if (i == 0)
            {
                if (strr[i].size() == 1)
                    cout << " " << strr[idx++] << " ";
                else
                    cout << " " << strr[idx++] << " ";
            }
            else if (strr[i].size() == 1)
                cout << " " << strr[idx++] << "  ";
            else
                cout << " " << strr[idx++] << " ";
            // if(strr[i].size()==1) cout<<"  ";
        }
        cout << endl
             << endl;
    }
}

void printallEle(){

    cout << "1. H" << endl;
            cout << "2. He" << endl;
            cout << "3. Li" << endl;
            cout << "4. Be" << endl;
            cout << "5. B" << endl;
            cout << "6. C" << endl;
            cout << "7. N" << endl;
            cout << "8. O" << endl;
            cout << "9. F" << endl;
            cout << "10. Ne" << endl;
            cout << "11. Na" << endl;
            cout << "12. Mg" << endl;
            cout << "13. Al" << endl;
            cout << "14. Si" << endl;
            cout << "15. P" << endl;
            cout << "16. S" << endl;
            cout << "17. Cl" << endl;
            cout << "18. Ar" << endl;
            cout << "19. K" << endl;
            cout << "20. Ca" << endl;
            cout << "21. Sc" << endl;
            cout << "22. Ti" << endl;
            cout << "23. V" << endl;
            cout << "24. Cr" << endl;
            cout << "25. Mn" << endl;
            cout << "26. Fe" << endl;
            cout << "27. Co" << endl;
            cout << "28. Ni" << endl;
            cout << "29. Cu" << endl;
            cout << "30. Zn" << endl;
            cout << "31. Ga" << endl;
            cout << "32. Ge" << endl;
            cout << "33. As" << endl;
            cout << "34. Se" << endl;
            cout << "35. Br" << endl;
            cout << "36. Kr" << endl;
            cout << "37. Rb" << endl;
            cout << "38. Sr" << endl;
            cout << "39. Y" << endl;
            cout << "40. Zr" << endl;
            cout << "41. Nb" << endl;
            cout << "42. Mo" << endl;
            cout << "43. Tc" << endl;
            cout << "44. Ru" << endl;
            cout << "45. Rh" << endl;
            cout << "46. Pd" << endl;
            cout << "47. Ag" << endl;
            cout << "48. Cd" << endl;
            cout << "49. In" << endl;
            cout << "50. Sn" << endl;
            cout << "51. Sb" << endl;
            cout << "52. Te" << endl;
            cout << "53. I" << endl;
            cout << "54. Xe" << endl;
            cout << "55. Cs" << endl;
            cout << "56. Ba" << endl;
            cout << "57. La" << endl;
            cout << "58. Ce" << endl;
            cout << "59. Pr" << endl;
            cout << "60. Nd" << endl;
            cout << "61. Pm" << endl;
            cout << "62. Sm" << endl;
            cout << "63. Eu" << endl;
            cout << "64. Gd" << endl;
            cout << "65. Tb" << endl;
            cout << "66. Dy" << endl;
            cout << "67. Ho" << endl;
            cout << "68. Er" << endl;
            cout << "69. Tm" << endl;
            cout << "70. Yb" << endl;
            cout << "71. Lu" << endl;
            cout << "72. Hf" << endl;
            cout << "73. Ta" << endl;
            cout << "74. W" << endl;
            cout << "75. Re" << endl;
            cout << "76. Os" << endl;
            cout << "77. Ir" << endl;
            cout << "78. Pt" << endl;
            cout << "79. Au" << endl;
            cout << "80. Hg" << endl;
            cout << "81. Tl" << endl;
            cout << "82. Pb" << endl;
            cout << "83. Bi" << endl;
            cout << "84. Po" << endl;
            cout << "85. At" << endl;
            cout << "86. Rn" << endl;
            cout << "87. Fr" << endl;
            cout << "88. Ra" << endl;
            cout << "89. Ac" << endl;
            cout << "90. Th" << endl;
            cout << "91. Pa" << endl;
            cout << "92. U" << endl;
            cout << "93. Np" << endl;
            cout << "94. Pu" << endl;
            cout << "95. Am" << endl;
            cout << "96. Cm" << endl;
            cout << "97. Bk" << endl;
            cout << "98. Cf" << endl;
            cout << "99. Es" << endl;
            cout << "100. Fm" << endl;
            cout << "101. Md" << endl;
            cout << "102. No" << endl;
            cout << "103. Lr" << endl;
            cout << "104. Rf" << endl;
            cout << "105. Db" << endl;
            cout << "106. Sg" << endl;
            cout << "107. Bh" << endl;
            cout << "108. Hs" << endl;
            cout << "109. Mt" << endl;
            cout << "110. Ds" << endl;
            cout << "111. Rg" << endl;
            cout << "112. Cn" << endl;
            cout << "113. Nh" << endl;
            cout << "114. Fl" << endl;
            cout << "115. Mc" << endl;
            cout << "116. Lv" << endl;
            cout << "117. Ts" << endl;
            cout << "118. Og" << endl;

}

