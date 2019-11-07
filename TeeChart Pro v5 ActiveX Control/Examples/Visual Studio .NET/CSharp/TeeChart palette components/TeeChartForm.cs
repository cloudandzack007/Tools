using System;
using System.Drawing;
using System.Collections;
using System.ComponentModel;
using System.Windows.Forms;
using System.Data;

namespace WindowsApplication1
{
	/// <summary>
	/// Summary description for Form1.
	/// </summary>
	public class Form1 : System.Windows.Forms.Form
	{
		private System.Windows.Forms.Panel panel1;
		private System.Windows.Forms.Panel panel2;
		private AxTeeChart.AxTeeCommander axTeeCommander1;
		private AxTeeChart.AxChartGrid axChartGrid1;
		private AxTeeChart.AxTChart axTChart1;
		private AxTeeChart.AxTeeEditor axTeeEditor1;
		private AxTeeChart.AxChartGridNavigator axChartGridNavigator1;
		private AxTeeChart.AxChartPageNavigator axChartPageNavigator1;
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
			this.axTeeCommander1 = new AxTeeChart.AxTeeCommander();
			this.panel1 = new System.Windows.Forms.Panel();
			this.axChartGrid1 = new AxTeeChart.AxChartGrid();
			this.axTChart1 = new AxTeeChart.AxTChart();
			this.panel2 = new System.Windows.Forms.Panel();
			this.axTeeEditor1 = new AxTeeChart.AxTeeEditor();
			this.axChartGridNavigator1 = new AxTeeChart.AxChartGridNavigator();
			this.axChartPageNavigator1 = new AxTeeChart.AxChartPageNavigator();
			((System.ComponentModel.ISupportInitialize)(this.axTeeCommander1)).BeginInit();
			this.panel1.SuspendLayout();
			((System.ComponentModel.ISupportInitialize)(this.axChartGrid1)).BeginInit();
			((System.ComponentModel.ISupportInitialize)(this.axTChart1)).BeginInit();
			this.panel2.SuspendLayout();
			((System.ComponentModel.ISupportInitialize)(this.axTeeEditor1)).BeginInit();
			((System.ComponentModel.ISupportInitialize)(this.axChartGridNavigator1)).BeginInit();
			((System.ComponentModel.ISupportInitialize)(this.axChartPageNavigator1)).BeginInit();
			this.SuspendLayout();
			// 
			// axTeeCommander1
			// 
			this.axTeeCommander1.Dock = System.Windows.Forms.DockStyle.Top;
			this.axTeeCommander1.Name = "axTeeCommander1";
			this.axTeeCommander1.OcxState = ((System.Windows.Forms.AxHost.State)(resources.GetObject("axTeeCommander1.OcxState")));
			this.axTeeCommander1.Size = new System.Drawing.Size(696, 32);
			this.axTeeCommander1.TabIndex = 0;
			// 
			// panel1
			// 
			this.panel1.Controls.AddRange(new System.Windows.Forms.Control[] {
																				 this.axChartGrid1,
																				 this.axTChart1});
			this.panel1.Dock = System.Windows.Forms.DockStyle.Top;
			this.panel1.Location = new System.Drawing.Point(0, 32);
			this.panel1.Name = "panel1";
			this.panel1.Size = new System.Drawing.Size(696, 328);
			this.panel1.TabIndex = 6;
			// 
			// axChartGrid1
			// 
			this.axChartGrid1.ContainingControl = this;
			this.axChartGrid1.Dock = System.Windows.Forms.DockStyle.Right;
			this.axChartGrid1.Enabled = true;
			this.axChartGrid1.Location = new System.Drawing.Point(480, 0);
			this.axChartGrid1.Name = "axChartGrid1";
			this.axChartGrid1.OcxState = ((System.Windows.Forms.AxHost.State)(resources.GetObject("axChartGrid1.OcxState")));
			this.axChartGrid1.Size = new System.Drawing.Size(216, 328);
			this.axChartGrid1.TabIndex = 1;
			// 
			// axTChart1
			// 
			this.axTChart1.Anchor = (((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
				| System.Windows.Forms.AnchorStyles.Left) 
				| System.Windows.Forms.AnchorStyles.Right);
			this.axTChart1.ContainingControl = this;
			this.axTChart1.Enabled = true;
			this.axTChart1.Name = "axTChart1";
			this.axTChart1.OcxState = ((System.Windows.Forms.AxHost.State)(resources.GetObject("axTChart1.OcxState")));
			this.axTChart1.Size = new System.Drawing.Size(480, 328);
			this.axTChart1.TabIndex = 0;
			// 
			// panel2
			// 
			this.panel2.Controls.AddRange(new System.Windows.Forms.Control[] {
																				 this.axTeeEditor1,
																				 this.axChartGridNavigator1,
																				 this.axChartPageNavigator1});
			this.panel2.Dock = System.Windows.Forms.DockStyle.Bottom;
			this.panel2.Location = new System.Drawing.Point(0, 365);
			this.panel2.Name = "panel2";
			this.panel2.Size = new System.Drawing.Size(696, 40);
			this.panel2.TabIndex = 7;
			// 
			// axTeeEditor1
			// 
			this.axTeeEditor1.ContainingControl = this;
			this.axTeeEditor1.Enabled = true;
			this.axTeeEditor1.Location = new System.Drawing.Point(432, 16);
			this.axTeeEditor1.Name = "axTeeEditor1";
			this.axTeeEditor1.OcxState = ((System.Windows.Forms.AxHost.State)(resources.GetObject("axTeeEditor1.OcxState")));
			this.axTeeEditor1.Size = new System.Drawing.Size(16, 16);
			this.axTeeEditor1.TabIndex = 2;
			// 
			// axChartGridNavigator1
			// 
			this.axChartGridNavigator1.ContainingControl = this;
			this.axChartGridNavigator1.Enabled = true;
			this.axChartGridNavigator1.Location = new System.Drawing.Point(440, 8);
			this.axChartGridNavigator1.Name = "axChartGridNavigator1";
			this.axChartGridNavigator1.OcxState = ((System.Windows.Forms.AxHost.State)(resources.GetObject("axChartGridNavigator1.OcxState")));
			this.axChartGridNavigator1.Size = new System.Drawing.Size(248, 24);
			this.axChartGridNavigator1.TabIndex = 1;
			// 
			// axChartPageNavigator1
			// 
			this.axChartPageNavigator1.ContainingControl = this;
			this.axChartPageNavigator1.Enabled = true;
			this.axChartPageNavigator1.Location = new System.Drawing.Point(0, 8);
			this.axChartPageNavigator1.Name = "axChartPageNavigator1";
			this.axChartPageNavigator1.OcxState = ((System.Windows.Forms.AxHost.State)(resources.GetObject("axChartPageNavigator1.OcxState")));
			this.axChartPageNavigator1.Size = new System.Drawing.Size(432, 24);
			this.axChartPageNavigator1.TabIndex = 0;
			// 
			// Form1
			// 
			this.AutoScaleBaseSize = new System.Drawing.Size(5, 13);
			this.ClientSize = new System.Drawing.Size(696, 405);
			this.Controls.AddRange(new System.Windows.Forms.Control[] {
																		  this.panel2,
																		  this.panel1,
																		  this.axTeeCommander1});
			this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
			this.Name = "Form1";
			this.Text = "TeeChart palette Components";
			this.Load += new System.EventHandler(this.Form1_Load);
			((System.ComponentModel.ISupportInitialize)(this.axTeeCommander1)).EndInit();
			this.panel1.ResumeLayout(false);
			((System.ComponentModel.ISupportInitialize)(this.axChartGrid1)).EndInit();
			((System.ComponentModel.ISupportInitialize)(this.axTChart1)).EndInit();
			this.panel2.ResumeLayout(false);
			((System.ComponentModel.ISupportInitialize)(this.axTeeEditor1)).EndInit();
			((System.ComponentModel.ISupportInitialize)(this.axChartGridNavigator1)).EndInit();
			((System.ComponentModel.ISupportInitialize)(this.axChartPageNavigator1)).EndInit();
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

		private void Form1_Load(object sender, System.EventArgs e)
		{
			axChartPageNavigator1.ChartLink=axTChart1.ChartLink;
			axChartGrid1.ChartLink=axTChart1.ChartLink;
			axTeeCommander1.ChartLink=axTChart1.ChartLink;
			axTeeEditor1.ChartLink=axTChart1.ChartLink;
			axChartGridNavigator1.GridLink=axChartGrid1.GridLink;

			axTeeCommander1.EditorLink=axTeeEditor1.EditorLink;
			axTeeEditor1.DefaultPage=TeeChart.ETeeEditorPage.epGeneral;

			axTChart1.Series(0).FillSampleValues(100);
		}

		private void axTChart1_OnAfterDraw(object sender, System.EventArgs e)
		{
		}
	}
}
