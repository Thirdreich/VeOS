using System;
using System.Collections.Generic;
using System.Text;
using Sys = Cosmos.System;

namespace VlaicuOS.Commands {

	public class Command {
		
		public readonly String name;
		
		
		
		public Command (String name) { this.name+name }
		
		
		public virtual void Execute(String[] args) { return ""; }
		
	}

}
