using System;
using System.Drawing;
using System.Collections;
using System.ComponentModel;
using System.Windows.Forms;
using System.Data;

namespace Dragging
{
	/// <summary>
	/// Summary description for Form1.
	/// </summary>
	public class Form1 : System.Windows.Forms.Form
	{
		private AxTeeChart.AxTChart axTChart1;
		private System.Windows.Forms.Button button1;
		private System.Windows.Forms.Button button2;
		private System.Windows.Forms.CheckBox checkBox1;
		private System.Windows.Forms.ComboBox comboBox1;
		private System.Windows.Forms.HScrollBar hScrollBar1;
		private System.Windows.Forms.Label label1;
		/// <summary>
		/// Required designer variable.
		/// </summary>
		private System.ComponentModel.Container components = null;

		public Form1()
		{
			//
			// Required for Windows Form Designer support
			//
			InitializeComponent();

			//
			// TODO: Add any constructor code after InitializeComponent call
			//
		}

		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		protected override void Dispose( bool disposing )
		{
			if( disposing )
			{
				if (components != null) 
				{
					components.Dispose();
				}
			}
			base.Dispose( disposing );
		}

		#region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		private void InitializeComponent()
		{
			System.Resources.ResourceManager resources = new System.Resources.ResourceManager(typeof(Form1));
			this.axTChart1 = new AxTeeChart.AxTChart();
			this.button1 = new System.Windows.Forms.Button();
			this.button2 = new System.Windows.Forms.Button();
			this.checkBox1 = new System.Windows.Forms.CheckBox();
			this.comboBox1 = new System.Windows.Forms.ComboBox();
			this.hScrollBar1 = new System.Windows.Forms.HScrollBar();
			this.label1 = new System.Windows.Forms.Label();
			((System.ComponentModel.ISupportInitialize)(this.axTChart1)).BeginInit();
			this.SuspendLayout();
			// 
			// axTChart1
			// 
			this.axTChart1.Enabled = true;
			this.axTChart1.Location = new System.Drawing.Point(8, 8);
			this.axTChart1.Name = "axTChart1";
			this.axTChart1.OcxState = ((System.Windows.Forms.AxHost.State)(resources.GetObject("axTChart1.OcxState")));
			this.axTChart1.Size = new System.Drawing.Size(536, 320);
			this.axTChart1.TabIndex = 0;
			this.axTChart1.OnMouseMove += new AxTeeChart.ITChartEvents_OnMouseMoveEventHandler(this.axTChart1_OnMouseMove);
			this.axTChart1.OnMouseDown += new AxTeeChart.ITChartEvents_OnMouseDownEventHandler(this.axTChart1_OnMouseDown);
			this.axTChart1.OnAfterDraw += new System.EventHandler(this.axTChart1_OnAfterDraw);
			this.axTChart1.OnMouseUp += new AxTeeChart.ITChartEvents_OnMouseUpEventHandler(this.axTChart1_OnMouseUp);
			// 
			// button1
			// 
			this.button1.Location = new System.Drawing.Point(376, 336);
			this.button1.Name = "button1";
			this.button1.TabIndex = 1;
			this.button1.Text = "&About";
			this.button1.Click += new System.EventHandler(this.button1_Click);
			// 
			// button2
			// 
			this.button2.Location = new System.Drawing.Point(472, 336);
			this.button2.Name = "button2";
			this.button2.TabIndex = 2;
			this.button2.Text = "&Close";
			this.button2.Click += new System.EventHandler(this.button2_Click);
			// 
			// checkBox1
			// 
			this.checkBox1.Checked = true;
			this.checkBox1.CheckState = System.Windows.Forms.CheckState.Checked;
			this.checkBox1.Location = new System.Drawing.Point(16, 334);
			this.checkBox1.Name = "checkBox1";
			this.checkBox1.Size = new System.Drawing.Size(80, 24);
			this.checkBox1.TabIndex = 3;
			this.checkBox1.Text = "&View 3D";
			this.checkBox1.CheckedChanged += new System.EventHandler(this.checkBox1_CheckedChanged);
			// 
			// comboBox1
			// 
			this.comboBox1.Items.AddRange(new object[] {
														   "Rectangle",
														   "Pyramid",
														   "Inv. Pyramid"});
			this.comboBox1.Location = new System.Drawing.Point(240, 336);
			this.comboBox1.Name = "comboBox1";
			this.comboBox1.Size = new System.Drawing.Size(121, 21);
			this.comboBox1.TabIndex = 4;
			this.comboBox1.Text = "Pyramid";
			this.comboBox1.SelectedIndexChanged += new System.EventHandler(this.comboBox1_SelectedIndexChanged);
			// 
			// hScrollBar1
			// 
			this.hScrollBar1.Location = new System.Drawing.Point(143, 339);
			this.hScrollBar1.Maximum = 99;
			this.hScrollBar1.Minimum = 1;
			this.hScrollBar1.Name = "hScrollBar1";
			this.hScrollBar1.SmallChange = 5;
			this.hScrollBar1.TabIndex = 5;
			this.hScrollBar1.Value = 1;
			this.hScrollBar1.Scroll += new System.Windows.Forms.ScrollEventHandler(this.hScrollBar1_Scroll);
			// 
			// label1
			// 
			this.label1.Location = new System.Drawing.Point(103, 339);
			this.label1.Name = "label1";
			this.label1.Size = new System.Drawing.Size(40, 16);
			this.label1.TabIndex = 6;
			this.label1.Text = "3D %:";
			// 
			// Form1
			// 
			this.AutoScaleBaseSize = new System.Drawing.Size(5, 13);
			this.ClientSize = new System.Drawing.Size(552, 365);
			this.Controls.AddRange(new System.Windows.Forms.Control[] {
																		  this.label1,
																		  this.hScrollBar1,
																		  this.comboBox1,
																		  this.checkBox1,
																		  this.button2,
																		  this.button1,
																		  this.axTChart1});
			this.Name = "Form1";
			this.Text = "Form1";
			this.Load += new System.EventHandler(this.Form1_Load);
			((System.ComponentModel.ISupportInitialize)(this.axTChart1)).EndInit();
			this.ResumeLayout(false);

		}
		#endregion

		/// <summary>
		/// The main entry point for the application.
		/// </summary>
		[STAThread]
		static void Main() 
		{
			Application.Run(new Form1());
		}

		private void button1_Click(object sender, System.EventArgs e)
		{
			axTChart1.ShowAboutBox();
		}

		private void button2_Click(object sender, System.EventArgs e)
		{
			this.Close();
		}

		private void hScrollBar1_Scroll(object sender, System.Windows.Forms.ScrollEventArgs e)
		{
			axTChart1.Aspect.Chart3DPercent=hScrollBar1.Value;
		}

		private void checkBox1_CheckedChanged(object sender, System.EventArgs e)
		{
			axTChart1.Aspect.View3D=checkBox1.Checked;
			hScrollBar1.Enabled=checkBox1.Checked;
		}

		int TheClickedPyramid;

		private void Form1_Load(object sender, System.EventArgs e)
		{
                //some sample data for the pyramids...
				axTChart1.Series(0).FillSampleValues(8);

				// change pyramids cursor...
				axTChart1.Series(0).Cursor = 2020;

				// do not allow zoom and scroll
				axTChart1.Zoom.Enable = false;
				axTChart1.Scroll.Enable = TeeChart.EChartScroll.pmNone;

				// set temporary variables...
				TheClickedPyramid = -1;

				// set starting scroll-bar position...
				hScrollBar1.Value = axTChart1.Aspect.Chart3DPercent;

				// set starting combo value
				comboBox1.SelectedIndex = 1;

		}

		private void comboBox1_SelectedIndexChanged(object sender, System.EventArgs e)
		{
			axTChart1.Series(0).asBar.BarStyle = (TeeChart.EBarStyle)comboBox1.SelectedIndex;
		}

		private void axTChart1_OnAfterDraw(object sender, System.EventArgs e)
		{
			//Custom draw a white circle around the clicked pyramid...
			int X;
			int Y;
			TeeChart.ICanvas tmpCanvas;
			TeeChart.ISeries tmpSeries;

			if (TheClickedPyramid != -1)
			{
				tmpCanvas=axTChart1.Canvas;
				tmpCanvas.Pen.Color = System.Convert.ToUInt32(System.Drawing.ColorTranslator.ToOle(System.Drawing.Color.White));
				tmpCanvas.Pen.Width = 1;
				tmpCanvas.Pen.Style = TeeChart.EChartPenStyle.psDot;
				tmpCanvas.Brush.Style = TeeChart.EBrushStyle.bsClear;
				
				tmpSeries=axTChart1.Series(0);
                X = tmpSeries.CalcXPos(TheClickedPyramid);
                Y = tmpSeries.CalcYPos(TheClickedPyramid);
                tmpCanvas.Ellipse(X, Y, X + 40, Y + 40);
			}		
		}

		private void axTChart1_OnMouseDown(object sender, AxTeeChart.ITChartEvents_OnMouseDownEvent e)
		{
			// calculate if mouse has clicked a Pyramid...
			TheClickedPyramid = axTChart1.Series(0).Clicked(e.x, e.y);
		}

		private void axTChart1_OnMouseMove(object sender, AxTeeChart.ITChartEvents_OnMouseMoveEvent e)
		{
			// drag the pyramid !!!
			if (TheClickedPyramid != -1)
			{
				axTChart1.Series(0).set_PointValue(TheClickedPyramid,axTChart1.Series(0).YScreenToValue(e.y));
			}
		}

		private void axTChart1_OnMouseUp(object sender, AxTeeChart.ITChartEvents_OnMouseUpEvent e)
		{
			// when releasing mouse, stop dragging...
			TheClickedPyramid = -1;
			axTChart1.Repaint();
		}
	}
}
