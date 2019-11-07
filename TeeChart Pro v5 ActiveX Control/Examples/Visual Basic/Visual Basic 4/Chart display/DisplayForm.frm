VERSION 4.00
Begin VB.Form Form1 
   Caption         =   "Chart appearance"
   ClientHeight    =   7500
   ClientLeft      =   2130
   ClientTop       =   1470
   ClientWidth     =   7470
   Height          =   7905
   Left            =   2070
   LinkTopic       =   "Form1"
   ScaleHeight     =   7500
   ScaleWidth      =   7470
   Top             =   1125
   Width           =   7590
   Begin TeeChart.TChart TChart1 
      Height          =   3795
      Left            =   45
      OleObjectBlob   =   "DisplayForm.frx":0000
      TabIndex        =   0
      Top             =   60
      Width           =   6000
   End
   Begin Threed.SSPanel SSPanel1 
      Height          =   2190
      Left            =   6105
      TabIndex        =   1
      Top             =   60
      Width           =   1335
      _Version        =   65536
      _ExtentX        =   2355
      _ExtentY        =   3863
      _StockProps     =   15
      BackColor       =   12632256
      BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Begin VB.CheckBox Check6 
         Caption         =   "Frame"
         Height          =   255
         Left            =   240
         TabIndex        =   55
         Top             =   1800
         Width           =   855
      End
      Begin Threed.SSFrame SSFrame7 
         Height          =   1335
         Left            =   120
         TabIndex        =   56
         Top             =   360
         Width           =   1095
         _Version        =   65536
         _ExtentX        =   1931
         _ExtentY        =   2355
         _StockProps     =   14
         Caption         =   "Axes"
         BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
            Name            =   "MS Sans Serif"
            Size            =   8.25
            Charset         =   0
            Weight          =   400
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Begin VB.CheckBox Check10 
            Caption         =   "Right"
            Height          =   195
            Left            =   120
            TabIndex        =   60
            Top             =   960
            Width           =   855
         End
         Begin VB.CheckBox Check9 
            Caption         =   "Bottom"
            Height          =   255
            Left            =   120
            TabIndex        =   59
            Top             =   720
            Width           =   855
         End
         Begin VB.CheckBox Check8 
            Caption         =   "Left"
            Height          =   255
            Left            =   120
            TabIndex        =   58
            Top             =   480
            Width           =   855
         End
         Begin VB.CheckBox Check7 
            Caption         =   "Top"
            Height          =   255
            Left            =   120
            TabIndex        =   57
            Top             =   240
            Width           =   855
         End
      End
      Begin VB.Label Label1 
         Caption         =   "Chart axes"
         BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
            Name            =   "MS Sans Serif"
            Size            =   8.25
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   255
         Left            =   120
         TabIndex        =   61
         Top             =   75
         Width           =   1095
      End
   End
   Begin Threed.SSPanel SSPanel3 
      Height          =   1620
      Left            =   6105
      TabIndex        =   2
      Top             =   2295
      Width           =   1335
      _Version        =   65536
      _ExtentX        =   2355
      _ExtentY        =   2858
      _StockProps     =   15
      BackColor       =   12632256
      BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Begin VB.HScrollBar HScroll2 
         Height          =   255
         Left            =   240
         Max             =   10
         TabIndex        =   64
         Top             =   840
         Value           =   1
         Width           =   975
      End
      Begin VB.CheckBox Check11 
         Caption         =   "Visible"
         Height          =   255
         Left            =   240
         TabIndex        =   63
         Top             =   360
         Width           =   855
      End
      Begin VB.Label Label11 
         Height          =   255
         Left            =   720
         TabIndex        =   66
         Top             =   1200
         Width           =   375
      End
      Begin VB.Label Label2 
         Caption         =   "Size"
         Height          =   255
         Left            =   240
         TabIndex        =   65
         Top             =   1200
         Width           =   375
      End
      Begin VB.Label Label3 
         Caption         =   "Walls"
         BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
            Name            =   "MS Sans Serif"
            Size            =   8.25
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   255
         Left            =   120
         TabIndex        =   3
         Top             =   75
         Width           =   855
      End
   End
   Begin Threed.SSPanel SSPanel4 
      Height          =   3495
      Left            =   45
      TabIndex        =   4
      Top             =   3960
      Width           =   6015
      _Version        =   65536
      _ExtentX        =   10610
      _ExtentY        =   6165
      _StockProps     =   15
      BackColor       =   12632256
      BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Begin VB.VScrollBar VScroll2 
         Height          =   510
         Left            =   1245
         Max             =   4
         Min             =   1
         TabIndex        =   42
         Top             =   480
         Value           =   1
         Width           =   375
      End
      Begin VB.VScrollBar VScroll1 
         Height          =   255
         Left            =   1245
         Max             =   4
         TabIndex        =   41
         Top             =   1560
         Width           =   375
      End
      Begin VB.CheckBox Check4 
         Caption         =   "No Back colour"
         Height          =   375
         Left            =   4800
         TabIndex        =   30
         Top             =   840
         Width           =   1095
      End
      Begin VB.CheckBox Check3 
         Caption         =   "Border"
         Height          =   255
         Left            =   240
         TabIndex        =   29
         Top             =   1560
         Width           =   975
      End
      Begin VB.TextBox Text4 
         Height          =   375
         Left            =   4320
         TabIndex        =   28
         Top             =   840
         Width           =   375
      End
      Begin VB.CommandButton Command11 
         Caption         =   "Back colour"
         Height          =   375
         Left            =   2880
         TabIndex        =   27
         Top             =   840
         Width           =   1335
      End
      Begin VB.TextBox Text1 
         Height          =   375
         Left            =   4320
         TabIndex        =   7
         Top             =   360
         Width           =   375
      End
      Begin VB.CommandButton Command6 
         Caption         =   "Panel colour"
         Height          =   375
         Left            =   2880
         TabIndex        =   6
         Top             =   360
         Width           =   1335
      End
      Begin Threed.SSFrame SSFrame1 
         Height          =   2055
         Left            =   2880
         TabIndex        =   8
         Top             =   1320
         Width           =   3015
         _Version        =   65536
         _ExtentX        =   5318
         _ExtentY        =   3625
         _StockProps     =   14
         Caption         =   "Gradient"
         BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
            Name            =   "MS Sans Serif"
            Size            =   8.25
            Charset         =   0
            Weight          =   400
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Begin VB.CheckBox Check1 
            Caption         =   "Visible"
            Height          =   255
            Left            =   120
            TabIndex        =   13
            Top             =   360
            Width           =   855
         End
         Begin VB.TextBox Text3 
            BackColor       =   &H0000FFFF&
            Height          =   375
            Left            =   1200
            TabIndex        =   12
            Top             =   720
            Width           =   375
         End
         Begin VB.TextBox Text2 
            Height          =   375
            Left            =   1200
            TabIndex        =   11
            Top             =   240
            Width           =   375
         End
         Begin VB.CommandButton Command9 
            Caption         =   "End colour"
            Height          =   375
            Left            =   1680
            TabIndex        =   10
            Top             =   720
            Width           =   1215
         End
         Begin VB.CommandButton Command8 
            Caption         =   "Start colour"
            Height          =   375
            Left            =   1680
            TabIndex        =   9
            Top             =   240
            Width           =   1215
         End
         Begin Threed.SSFrame SSFrame2 
            Height          =   855
            Left            =   120
            TabIndex        =   14
            Top             =   1080
            Width           =   2775
            _Version        =   65536
            _ExtentX        =   4895
            _ExtentY        =   1508
            _StockProps     =   14
            Caption         =   "Direction"
            BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
               Name            =   "MS Sans Serif"
               Size            =   8.25
               Charset         =   0
               Weight          =   400
               Underline       =   0   'False
               Italic          =   0   'False
               Strikethrough   =   0   'False
            EndProperty
            Begin Threed.SSOption SSOption4 
               Height          =   255
               Left            =   1440
               TabIndex        =   18
               Top             =   480
               Width           =   1095
               _Version        =   65536
               _ExtentX        =   1931
               _ExtentY        =   450
               _StockProps     =   78
               Caption         =   "Bottom Top"
               BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
                  Name            =   "MS Sans Serif"
                  Size            =   8.25
                  Charset         =   0
                  Weight          =   400
                  Underline       =   0   'False
                  Italic          =   0   'False
                  Strikethrough   =   0   'False
               EndProperty
            End
            Begin Threed.SSOption SSOption3 
               Height          =   255
               Left            =   120
               TabIndex        =   17
               Top             =   480
               Width           =   1215
               _Version        =   65536
               _ExtentX        =   2143
               _ExtentY        =   450
               _StockProps     =   78
               Caption         =   "Top Bottom"
               BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
                  Name            =   "MS Sans Serif"
                  Size            =   8.25
                  Charset         =   0
                  Weight          =   400
                  Underline       =   0   'False
                  Italic          =   0   'False
                  Strikethrough   =   0   'False
               EndProperty
            End
            Begin Threed.SSOption SSOption2 
               Height          =   255
               Left            =   1440
               TabIndex        =   16
               Top             =   240
               Width           =   975
               _Version        =   65536
               _ExtentX        =   1720
               _ExtentY        =   450
               _StockProps     =   78
               Caption         =   "Right Left"
               BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
                  Name            =   "MS Sans Serif"
                  Size            =   8.25
                  Charset         =   0
                  Weight          =   400
                  Underline       =   0   'False
                  Italic          =   0   'False
                  Strikethrough   =   0   'False
               EndProperty
            End
            Begin Threed.SSOption SSOption1 
               Height          =   255
               Left            =   120
               TabIndex        =   15
               Top             =   240
               Width           =   1095
               _Version        =   65536
               _ExtentX        =   1931
               _ExtentY        =   450
               _StockProps     =   78
               Caption         =   "Left Right"
               BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
                  Name            =   "MS Sans Serif"
                  Size            =   8.25
                  Charset         =   0
                  Weight          =   400
                  Underline       =   0   'False
                  Italic          =   0   'False
                  Strikethrough   =   0   'False
               EndProperty
            End
         End
      End
      Begin Threed.SSFrame SSFrame3 
         Height          =   1455
         Left            =   120
         TabIndex        =   19
         Top             =   1920
         Width           =   2655
         _Version        =   65536
         _ExtentX        =   4683
         _ExtentY        =   2566
         _StockProps     =   14
         Caption         =   "BackImage"
         BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
            Name            =   "MS Sans Serif"
            Size            =   8.25
            Charset         =   0
            Weight          =   400
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Begin VB.CheckBox Check2 
            Caption         =   "Inside"
            Height          =   195
            Left            =   120
            TabIndex        =   26
            Top             =   1080
            Width           =   975
         End
         Begin VB.CommandButton Command10 
            Caption         =   "Clear"
            Height          =   255
            Left            =   120
            TabIndex        =   21
            Top             =   720
            Width           =   975
         End
         Begin VB.CommandButton Command7 
            Caption         =   "Browse..."
            Height          =   255
            Left            =   120
            TabIndex        =   20
            Top             =   360
            Width           =   975
         End
         Begin Threed.SSFrame SSFrame4 
            Height          =   1095
            Left            =   1440
            TabIndex        =   22
            Top             =   240
            Width           =   1095
            _Version        =   65536
            _ExtentX        =   1931
            _ExtentY        =   1931
            _StockProps     =   14
            Caption         =   "Style"
            BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
               Name            =   "MS Sans Serif"
               Size            =   8.25
               Charset         =   0
               Weight          =   400
               Underline       =   0   'False
               Italic          =   0   'False
               Strikethrough   =   0   'False
            EndProperty
            Begin Threed.SSOption SSOption7 
               Height          =   255
               Left            =   120
               TabIndex        =   25
               Top             =   720
               Width           =   735
               _Version        =   65536
               _ExtentX        =   1296
               _ExtentY        =   450
               _StockProps     =   78
               Caption         =   "Centre"
               BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
                  Name            =   "MS Sans Serif"
                  Size            =   8.25
                  Charset         =   0
                  Weight          =   400
                  Underline       =   0   'False
                  Italic          =   0   'False
                  Strikethrough   =   0   'False
               EndProperty
            End
            Begin Threed.SSOption SSOption6 
               Height          =   255
               Left            =   120
               TabIndex        =   24
               Top             =   480
               Width           =   735
               _Version        =   65536
               _ExtentX        =   1296
               _ExtentY        =   450
               _StockProps     =   78
               Caption         =   "Tile"
               BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
                  Name            =   "MS Sans Serif"
                  Size            =   8.25
                  Charset         =   0
                  Weight          =   400
                  Underline       =   0   'False
                  Italic          =   0   'False
                  Strikethrough   =   0   'False
               EndProperty
            End
            Begin Threed.SSOption SSOption5 
               Height          =   255
               Left            =   120
               TabIndex        =   23
               Top             =   240
               Width           =   855
               _Version        =   65536
               _ExtentX        =   1508
               _ExtentY        =   450
               _StockProps     =   78
               Caption         =   "Stretch"
               BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
                  Name            =   "MS Sans Serif"
                  Size            =   8.25
                  Charset         =   0
                  Weight          =   400
                  Underline       =   0   'False
                  Italic          =   0   'False
                  Strikethrough   =   0   'False
               EndProperty
            End
         End
      End
      Begin Threed.SSFrame SSFrame5 
         Height          =   1095
         Left            =   120
         TabIndex        =   31
         Top             =   360
         Width           =   1050
         _Version        =   65536
         _ExtentX        =   1852
         _ExtentY        =   1931
         _StockProps     =   14
         Caption         =   "Bevel Inner"
         BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
            Name            =   "MS Sans Serif"
            Size            =   8.25
            Charset         =   0
            Weight          =   400
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Begin Threed.SSOption SSOption10 
            Height          =   255
            Left            =   120
            TabIndex        =   35
            Top             =   720
            Width           =   855
            _Version        =   65536
            _ExtentX        =   1508
            _ExtentY        =   450
            _StockProps     =   78
            Caption         =   "Raised"
            BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
               Name            =   "MS Sans Serif"
               Size            =   8.25
               Charset         =   0
               Weight          =   400
               Underline       =   0   'False
               Italic          =   0   'False
               Strikethrough   =   0   'False
            EndProperty
         End
         Begin Threed.SSOption SSOption9 
            Height          =   255
            Left            =   120
            TabIndex        =   34
            Top             =   480
            Width           =   855
            _Version        =   65536
            _ExtentX        =   1508
            _ExtentY        =   450
            _StockProps     =   78
            Caption         =   "Lowered"
            BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
               Name            =   "MS Sans Serif"
               Size            =   8.25
               Charset         =   0
               Weight          =   400
               Underline       =   0   'False
               Italic          =   0   'False
               Strikethrough   =   0   'False
            EndProperty
         End
         Begin Threed.SSOption SSOption8 
            Height          =   255
            Left            =   120
            TabIndex        =   33
            Top             =   240
            Width           =   855
            _Version        =   65536
            _ExtentX        =   1508
            _ExtentY        =   450
            _StockProps     =   78
            Caption         =   "None"
            BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
               Name            =   "MS Sans Serif"
               Size            =   8.25
               Charset         =   0
               Weight          =   400
               Underline       =   0   'False
               Italic          =   0   'False
               Strikethrough   =   0   'False
            EndProperty
         End
      End
      Begin Threed.SSFrame SSFrame6 
         Height          =   1095
         Left            =   1680
         TabIndex        =   32
         Top             =   360
         Width           =   1050
         _Version        =   65536
         _ExtentX        =   1852
         _ExtentY        =   1931
         _StockProps     =   14
         Caption         =   "Bevel Outer"
         BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
            Name            =   "MS Sans Serif"
            Size            =   8.25
            Charset         =   0
            Weight          =   400
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Begin Threed.SSOption SSOption13 
            Height          =   255
            Left            =   120
            TabIndex        =   38
            Top             =   720
            Width           =   855
            _Version        =   65536
            _ExtentX        =   1508
            _ExtentY        =   450
            _StockProps     =   78
            Caption         =   "Raised"
            BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
               Name            =   "MS Sans Serif"
               Size            =   8.25
               Charset         =   0
               Weight          =   400
               Underline       =   0   'False
               Italic          =   0   'False
               Strikethrough   =   0   'False
            EndProperty
         End
         Begin Threed.SSOption SSOption12 
            Height          =   255
            Left            =   120
            TabIndex        =   37
            Top             =   480
            Width           =   855
            _Version        =   65536
            _ExtentX        =   1508
            _ExtentY        =   450
            _StockProps     =   78
            Caption         =   "Lowered"
            BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
               Name            =   "MS Sans Serif"
               Size            =   8.25
               Charset         =   0
               Weight          =   400
               Underline       =   0   'False
               Italic          =   0   'False
               Strikethrough   =   0   'False
            EndProperty
         End
         Begin Threed.SSOption SSOption11 
            Height          =   255
            Left            =   120
            TabIndex        =   36
            Top             =   240
            Width           =   735
            _Version        =   65536
            _ExtentX        =   1296
            _ExtentY        =   450
            _StockProps     =   78
            Caption         =   "None"
            BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
               Name            =   "MS Sans Serif"
               Size            =   8.25
               Charset         =   0
               Weight          =   400
               Underline       =   0   'False
               Italic          =   0   'False
               Strikethrough   =   0   'False
            EndProperty
         End
      End
      Begin VB.Label Label6 
         BackStyle       =   0  'Transparent
         Caption         =   "Border width"
         Height          =   255
         Left            =   1725
         TabIndex        =   40
         Top             =   1560
         Width           =   975
      End
      Begin VB.Label Label5 
         BackStyle       =   0  'Transparent
         Caption         =   "Width"
         Height          =   270
         Left            =   1200
         TabIndex        =   39
         Top             =   1080
         Width           =   465
      End
      Begin VB.Label Label4 
         Caption         =   "Panel properties"
         BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
            Name            =   "MS Sans Serif"
            Size            =   8.25
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   255
         Left            =   120
         TabIndex        =   5
         Top             =   75
         Width           =   2415
      End
   End
   Begin Threed.SSPanel SSPanel5 
      Height          =   1335
      Left            =   6105
      TabIndex        =   43
      Top             =   3960
      Width           =   1335
      _Version        =   65536
      _ExtentX        =   2355
      _ExtentY        =   2355
      _StockProps     =   15
      BackColor       =   12632256
      BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Begin VB.HScrollBar HScroll1 
         Height          =   255
         Left            =   120
         Max             =   100
         Min             =   1
         TabIndex        =   46
         Top             =   720
         Value           =   1
         Width           =   1095
      End
      Begin VB.CheckBox Check5 
         Caption         =   "3D Enable"
         Height          =   255
         Left            =   120
         TabIndex        =   45
         Top             =   360
         Width           =   1095
      End
      Begin VB.Label Label9 
         Caption         =   "3D"
         BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
            Name            =   "MS Sans Serif"
            Size            =   8.25
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   255
         Left            =   120
         TabIndex        =   51
         Top             =   75
         Width           =   375
      End
      Begin VB.Label Label8 
         BackStyle       =   0  'Transparent
         BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
            Name            =   "MS Sans Serif"
            Size            =   8.25
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   255
         Left            =   720
         TabIndex        =   47
         Top             =   1080
         Width           =   495
      End
      Begin VB.Label Label7 
         BackStyle       =   0  'Transparent
         Caption         =   "3D %:"
         Height          =   255
         Left            =   120
         TabIndex        =   44
         Top             =   1080
         Width           =   615
      End
   End
   Begin Threed.SSPanel SSPanel6 
      Height          =   2115
      Left            =   6105
      TabIndex        =   48
      Top             =   5340
      Width           =   1335
      _Version        =   65536
      _ExtentX        =   2355
      _ExtentY        =   3731
      _StockProps     =   15
      BackColor       =   12632256
      BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Begin VB.CommandButton Command1 
         Caption         =   "Reset"
         Height          =   255
         Left            =   360
         TabIndex        =   62
         Top             =   1760
         Width           =   615
      End
      Begin VB.VScrollBar VScroll4 
         Height          =   375
         Left            =   480
         Max             =   35
         Min             =   3
         TabIndex        =   53
         Top             =   1200
         Value           =   3
         Width           =   375
      End
      Begin VB.VScrollBar VScroll3 
         Height          =   375
         Left            =   480
         Max             =   35
         Min             =   3
         TabIndex        =   52
         Top             =   360
         Value           =   3
         Width           =   375
      End
      Begin VB.HScrollBar HScroll4 
         Height          =   375
         Left            =   720
         Max             =   35
         Min             =   3
         TabIndex        =   50
         Top             =   780
         Value           =   5
         Width           =   495
      End
      Begin VB.HScrollBar HScroll3 
         Height          =   375
         Left            =   120
         Max             =   35
         Min             =   3
         TabIndex        =   49
         Top             =   780
         Value           =   3
         Width           =   495
      End
      Begin VB.Label Label10 
         Caption         =   "Margins"
         BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
            Name            =   "MS Sans Serif"
            Size            =   8.25
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   255
         Left            =   120
         TabIndex        =   54
         Top             =   75
         Width           =   735
      End
   End
   Begin MSComDlg.CommonDialog CommonDialog3 
      Left            =   6885
      Top             =   4020
      _ExtentX        =   847
      _ExtentY        =   847
      _Version        =   327681
   End
   Begin MSComDlg.CommonDialog CommonDialog2 
      Left            =   6885
      Top             =   4140
      _ExtentX        =   847
      _ExtentY        =   847
      _Version        =   327681
   End
   Begin MSComDlg.CommonDialog CommonDialog1 
      Left            =   6405
      Top             =   4140
      _ExtentX        =   847
      _ExtentY        =   847
      _Version        =   327681
   End
End
Attribute VB_Name = "Form1"
Attribute VB_Creatable = False
Attribute VB_Exposed = False
Private Sub Check1_Click()
  With TChart1.Panel.Gradient
    If Check1.Value = 1 Then
      .Visible = True
      SSOption1.Enabled = True
      SSOption2.Enabled = True
      SSOption3.Enabled = True
      SSOption4.Enabled = True
      SSOption3.Value = True
    Else
      .Visible = False
      SSOption1.Enabled = False
      SSOption2.Enabled = False
      SSOption3.Enabled = False
      SSOption4.Enabled = False
    End If
  End With
End Sub

Private Sub Check10_Click()
  With TChart1.Axis.Right
    If Check10.Value = 1 Then
      .Visible = True
    Else
      .Visible = False
    End If
  End With
End Sub

Private Sub Check11_Click()
  With TChart1.Walls
    If Check11.Value = 1 Then
      .Visible = True
    Else
      .Visible = False
    End If
  End With
End Sub

Private Sub Check2_Click()
  With TChart1.Panel
    If Check2.Value = 1 Then
      .BackImageInside = True
    Else
      .BackImageInside = False
    End If
  End With
End Sub


Private Sub Check3_Click()
  With TChart1.Panel
    If Check3.Value = 1 Then
      .BorderStyle = bsSingle
    Else
      .BorderStyle = bsNone
    End If
  End With
End Sub


Private Sub Check4_Click()
  With TChart1.Walls.Back
    If Check4.Value = 1 Then
      .Transparent = True
    Else
      .Transparent = False
      .Color = Text4.BackColor
    End If
  End With
End Sub


Private Sub Check5_Click()
  With TChart1
    If Check5.Value = 1 Then
      .Aspect.View3D = True
      HScroll1.Enabled = True
    Else
      .Aspect.View3D = False
      HScroll1.Enabled = False
    End If
  End With
End Sub

Private Sub Command1_Click()
    Hscroll3.Value = 3
    VScroll3.Value = 3
    HScroll4.Value = 32
    VScroll4.Value = 32
End Sub


Private Sub Check6_Click()
  
  'On top of the Frame are the TChart Axes
  'Therefore you won't see any change unless
  'Axis visible is 'false' on one of the Axes
  
  With TChart1.Walls.Back.Pen
    If Check6.Value = 1 Then
      .Visible = True
    Else
      .Visible = False
    End If
  End With
End Sub


Private Sub Check7_Click()
  With TChart1.Axis.Top
    If Check7.Value = 1 Then
      .Visible = True
    Else
      .Visible = False
    End If
  End With
End Sub

Private Sub Check8_Click()
  With TChart1.Axis.Left
    If Check8.Value = 1 Then
      .Visible = True
    Else
      .Visible = False
    End If
  End With
End Sub


Private Sub Check9_Click()
  With TChart1.Axis.Bottom
    If Check9.Value = 1 Then
      .Visible = True
    Else
      .Visible = False
    End If
  End With
End Sub


Private Sub Command10_Click()
 TChart1.Panel.BackImageClear
End Sub

Private Sub Command11_Click()
 CommonDialog1.ShowColor
 If CommonDialog1.Color > 0 Then
   TChart1.Walls.BackColor = CommonDialog1.Color
   Text4.BackColor = CommonDialog1.Color
 End If
End Sub


Private Sub Command2_Click()
  With TChart1.Axis.Top
    If .Visible = True Then
      .Visible = False
    Else
      .Visible = True
    End If
  End With
End Sub


Private Sub Command3_Click()
  With TChart1.Axis.Left
    If .Visible = True Then
      .Visible = False
    Else
      .Visible = True
    End If
  End With
End Sub


Private Sub Command4_Click()
  With TChart1.LeftWall
'    If .Visible = True Then
'      .Visible = False
'    Else
'      .Visible = True
'    End If
  End With
End Sub


Private Sub Command5_Click()
  With TChart1.BottomWall
    If .Visible = True Then
      .Visible = False
    Else
      .Visible = True
    End If
  End With
End Sub


Private Sub Command6_Click()
 CommonDialog1.ShowColor
 If CommonDialog1.Color > 0 Then
   TChart1.Panel.Color = CommonDialog1.Color
   Text1.BackColor = CommonDialog1.Color
 End If
End Sub


Private Sub Command7_Click()
  CommonDialog1.Filter = "Pictures(*.bmp,*.wmf,*.jpg)|*.bmp;*.wmf;*.jpg"
  CommonDialog1.ShowOpen
  If CommonDialog1.filename <> "" Then
    TChart1.Panel.BackImageLoad (CommonDialog1.filename)
    SSOption5.Enabled = True
    SSOption6.Enabled = True
    SSOption7.Enabled = True
    SSOption5.Value = True
    Check2.Enabled = True
  End If
End Sub


Private Sub Command8_Click()
 CommonDialog2.ShowColor
 If CommonDialog2.Color > 0 Then
   TChart1.Panel.Gradient.StartColor = CommonDialog2.Color
   Text2.BackColor = CommonDialog2.Color
 End If
End Sub


Private Sub Command9_Click()
 CommonDialog3.ShowColor
 If CommonDialog3.Color > 0 Then
   TChart1.Panel.Gradient.EndColor = CommonDialog3.Color
   Text3.BackColor = CommonDialog3.Color
 End If
End Sub


Private Sub Form_Load()
    SSOption1.Enabled = False
    SSOption2.Enabled = False
    SSOption3.Enabled = False
    SSOption4.Enabled = False
    SSOption5.Enabled = False
    SSOption6.Enabled = False
    SSOption7.Enabled = False
    'BackImage Inside
    Check2.Value = False
    Check2.Enabled = False
    Check5.Value = 1
    'Frame on
    Check6.Value = 1
    HScroll1.Value = 15
    'right and bottom margin
    HScroll4.Value = 32
    VScroll4.Value = 32
    'wall size and visible
    HScroll2.Value = 0
    Check11.Value = 1
    'Axes visible
    Check7.Value = 1
    Check8.Value = 1
    Check9.Value = 1
    Check10.Value = 1
    SSOption8.Value = True
    SSOption13.Value = True
    TChart1.Series(0).FillSampleValues 10
    TChart1.Series(1).FillSampleValues 10
    'BevelWidth 5 - 4
    VScroll2.Value = 4
    Check4.Value = 1
End Sub

Private Sub List1_Click()

End Sub


Private Sub HScroll1_Change()
  TChart1.Aspect.Chart3DPercent = HScroll1.Value
  Label8.Caption = Str$(HScroll1.Value)
End Sub

Private Sub HScroll2_Change()
  TChart1.Walls.Left.Size = HScroll2.Value
  TChart1.Walls.Bottom.Size = HScroll2.Value
  Label11.Caption = Str$(HScroll2.Value)
End Sub


Private Sub Hscroll3_Change()
  TChart1.Panel.MarginLeft = Hscroll3.Value
End Sub

Private Sub HScroll4_Change()
  TChart1.Panel.MarginRight = 38 - HScroll4.Value
End Sub

Private Sub SSOption1_Click(Value As Integer)
  With TChart1.Panel.Gradient
    If SSOption1.Value = True Then
      .Direction = gdLeftRight
    End If
  End With
  SSOption2.Value = False
  SSOption3.Value = False
  SSOption4.Value = False
End Sub


Private Sub SSOption10_Click(Value As Integer)
  With TChart1.Panel
    If SSOption10.Value = True Then
      .BevelInner = bvRaised
    End If
  End With
  SSOption8.Value = False
  SSOption9.Value = False
End Sub

Private Sub SSOption11_Click(Value As Integer)
  With TChart1.Panel
    If SSOption11.Value = True Then
      .BevelOuter = bvNone
    End If
  End With
  SSOption12.Value = False
  SSOption13.Value = False
End Sub

Private Sub SSOption12_Click(Value As Integer)
  With TChart1.Panel
    If SSOption12.Value = True Then
      .BevelOuter = bvLowered
    End If
  End With
  SSOption11.Value = False
  SSOption13.Value = False
End Sub

Private Sub SSOption13_Click(Value As Integer)
  With TChart1.Panel
    If SSOption13.Value = True Then
      .BevelOuter = bvRaised
    End If
  End With
  SSOption11.Value = False
  SSOption12.Value = False
End Sub

Private Sub SSOption2_Click(Value As Integer)
  With TChart1.Panel.Gradient
    If SSOption2.Value = True Then
      .Direction = gdRightLeft
    End If
  End With
  SSOption1.Value = False
  SSOption3.Value = False
  SSOption4.Value = False
End Sub


Private Sub SSOption3_Click(Value As Integer)
  With TChart1.Panel.Gradient
    If SSOption3.Value = True Then
      .Direction = gdTopBottom
    End If
  End With
  SSOption1.Value = False
  SSOption2.Value = False
  SSOption4.Value = False
End Sub


Private Sub SSOption4_Click(Value As Integer)
  With TChart1.Panel.Gradient
    If SSOption4.Value = True Then
      .Direction = gdBottomTop
    End If
  End With
  SSOption1.Value = False
  SSOption2.Value = False
  SSOption3.Value = False
End Sub


Private Sub SSOption5_Click(Value As Integer)
  With TChart1.Panel
    If SSOption5.Value = True Then
      .BackImageMode = pbmStretch
    End If
  End With
  SSOption6.Value = False
  SSOption7.Value = False
End Sub

Private Sub SSOption6_Click(Value As Integer)
  With TChart1.Panel
    If SSOption6.Value = True Then
      .BackImageMode = pbmTile
    End If
  End With
  SSOption5.Value = False
  SSOption7.Value = False
End Sub


Private Sub SSOption7_Click(Value As Integer)
  With TChart1.Panel
    If SSOption7.Value = True Then
      .BackImageMode = pbmCenter
    End If
  End With
  SSOption5.Value = False
  SSOption6.Value = False
End Sub


Private Sub SSOption8_Click(Value As Integer)
  With TChart1.Panel
    If SSOption8.Value = True Then
      .BevelInner = bvNone
    End If
  End With
  SSOption9.Value = False
  SSOption10.Value = False
End Sub


Private Sub SSOption9_Click(Value As Integer)
  With TChart1.Panel
    If SSOption9.Value = True Then
      .BevelInner = bvLowered
    End If
  End With
  SSOption8.Value = False
  SSOption10.Value = False
End Sub


Private Sub VScroll1_Change()
  TChart1.Panel.BevelOffset = VScroll1.Value
End Sub


Private Sub VScroll2_Change()
  TChart1.Panel.BevelWidth = 5 - VScroll2.Value
End Sub


Private Sub VScroll3_Change()
  TChart1.Panel.MarginTop = VScroll3.Value
End Sub


Private Sub VScroll4_Change()
  TChart1.Panel.MarginBottom = 38 - VScroll4.Value
End Sub


